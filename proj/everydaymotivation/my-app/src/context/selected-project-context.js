import React, { createContext, useContext, useState } from 'react';

export const SelectedProjectContext = createContext();
export const SelectedProjectProvider = ({ children }) => {
    const { selectedProject, setSelectedProject } = useState('TODAYS_LIST');

    return (
        <SelectedProjectContext.Provider value = {{ selectedProject, setSelectedProject }}>
            {children}
        </SelectedProjectContext.Provider>
    );
}

export const useSelectedProjectValue = () => useContext(SelectedProjectContext);