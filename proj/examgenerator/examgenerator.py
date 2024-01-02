import os
from pdf2image import convert_from_path
import cv2
import pytesseract

# FILEPATH: /c:/Users/User/Desktop/Projects/proj/examgenerator/examgenerator.py
from transformers import GPT2LMHeadModel, GPT2Tokenizer

tokenizer = GPT2Tokenizer.from_pretrained("gpt2")
model = GPT2LMHeadModel.from_pretrained("gpt2")

# Read the past paper questions from a file
with open("past_paper_questions.txt", "r") as file:
    questions = file.read().splitlines()

# Convert PDF files to images
pdf_files = ["file1.pdf", "file2.pdf"]
image_files = []
for pdf_file in pdf_files:
    images = convert_from_path(pdf_file)
    for i, image in enumerate(images):
        image_file = f"image_{i}.jpg"
        image.save(image_file, "JPEG")
        image_files.append(image_file)

# Extract text from images
extracted_text = []
for image_file in image_files:
    image = cv2.imread(image_file)
    text = pytesseract.image_to_string(image)
    extracted_text.append(text)

# Generate similar questions for each extracted text
for text in extracted_text:
    for question in questions:
        prompt = f"A mathematics question about algebra is: {question} {text}"

        inputs = tokenizer.encode(prompt, return_tensors='pt')
        outputs = model.generate(inputs, max_length=100, temperature=0.7, num_return_sequences=1)

        for output in outputs:
            print(tokenizer.decode(output))

