#include <stdio.h>
#include <stdlib.h>

struct Intern {
    char department[50];
    char intern_name[50];
    char intern_salary[50];
};

struct Employee {
    char department[50];
    char emp_name[50];
    char emp_salary[50];
    char experience[50];

    struct Intern intern;  // Intern details associated with an Employee
};

struct Manager {
    char name[50];
    char manager_salary[50];
    char experience[50];
    char department[50];
    struct Employee emp;  // Employee details associated with a Manager
};

struct CEO {
    char name[50];
    char ceo_salary[50]; // Corrected to char[] to store salary as a string
    struct Manager manager;  // Manager details associated with a CEO
    struct Employee emp;    // Employee details associated with a CEO
    struct Intern intern;   // Intern details associated with a CEO
} Company[50];

void main() {
    FILE *file;
    int choice, i, add_details, add_managers, add_hr_manager, add_tech_manager, add_employee_details;
    int add_emp, add_emp_hr_num, add_emp_tech_num, add_intern_details, add_intern, add_hr_intern;
    int choose_checkDetails, choose_manager_department, choose_employee_department;
    int ceo_pass = 1234;
    int hr_manager_pass = 1234;
    int hr_manage_pass;
    int tech_manager_pass = 1234;
    int tech_manage_pass;
    int hr_employee_pass = 1234;
    int hr_emp_pass;
    int tech_employee_pass = 1234;
    int tech_emp_pass;
    int choose_interns_department;
    int intern_hr_department_pass;
    int intern_hr_pass = 1234;
    int intern_tech_pass = 1234;
    int intern_tech_password;
    
    int input_pass;
    
    char c;
    
    printf("\n ===========   Welcome to IT Company  ============ ");
    
    printf("\n Do you want to check details or add details?");
    printf("\n 1. Add Details \n 2. Check Details \n 3. Exit");
    printf("\n Enter Number: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1: // Add Details
            file = fopen("company_data.txt", "a+");
            if (file == NULL) {
                printf("Error opening file.\n");
                return;
            }
            
            printf("\n Which department details do you want add? ");
            printf("\n 1. Managers \n 2. Employee \n 3. Interns");
            printf("\n Enter Number: ");
            scanf("%d", &add_details);
            
            switch (add_details) {
                case 1:  // Add Managers
                    printf("\n Which department managers do you want to add? ");
                    printf("\n 1. HR department \n 2. Tech department");
                    printf("\n Enter Number: ");
                    scanf("%d", &add_managers);
                    
                    printf("\n How many details do you want to add? ");
                    switch (add_managers) {
                        case 1:  // Add HR Department details
                            printf("\n Enter Number: ");
                            scanf("%d", &add_hr_manager);
                            
                            for (i = 0; i < add_hr_manager; i++) {
                                printf("\n Enter HR Name: ");
                                scanf("%s", Company[i].manager.name);
                                 
                                printf("\n Enter Department: ");
                                scanf("%s", Company[i].manager.department);
                                 
                                printf("\n Enter HR Experience: ");
                                scanf("%s", Company[i].manager.experience);
                                 
                                printf("\n Enter HR Salary: ");
                                scanf("%s", Company[i].manager.manager_salary);
                            }
                            
                            printf("\n Successfully Add Details!!");
                            printf("\n Thank You!!");
                            
                            // Writing to file
                            for (i = 0; i < add_hr_manager; i++) {
                                fprintf(file, "Manager: Name:  %s Department: %s Experience: %s Salary: %s \n", Company[i].manager.name, Company[i].manager.department, Company[i].manager.experience, Company[i].manager.manager_salary);
                            }
                            break;
                        
                        case 2: // Add Tech Department details
                            printf("\n Enter Number: ");
                            scanf("%d", &add_tech_manager);
                            
                            for (i = 0; i < add_tech_manager; i++) {
                                printf("\n Enter Name: ");
                                scanf("%s", Company[i].manager.name);
                                 
                                printf("\n Enter Department: ");
                                scanf("%s", Company[i].manager.department);
                                 
                                printf("\n Enter Experience: ");
                                scanf("%s", Company[i].manager.experience);
                                 
                                printf("\n Enter Salary: ");
                                scanf("%s", Company[i].manager.manager_salary);
                            }
                            
                            printf("\n Successfully Add Details!!");
                            printf("\n Thank You!!");
                            
                            // Writing to file
                            for (i = 0; i < add_tech_manager; i++) {
                                fprintf(file, "Manager: Name:  %s Department: %s Experience: %s Salary: %s \n", Company[i].manager.name, Company[i].manager.department, Company[i].manager.experience, Company[i].manager.manager_salary);
                            }
                            break;
                    }
                    break;
                
                case 2: // Add Employee
                    printf("\n Which department Employee do you want to add? ");
                    printf("\n 1. HR department \n 2. Tech department");
                    printf("\n Enter Number: ");
                    scanf("%d", &add_employee_details);
                    
                    printf("\n How many details do you want to add? ");
                    switch (add_employee_details) {
                        case 1: // Add HR Department Employee Details
                            printf("\n Enter Number: ");
                            scanf("%d", &add_emp_hr_num);
                            
                            for (i = 0; i < add_emp_hr_num; i++) {
                                printf("\n Enter Employee Name: ");
                                scanf("%s", Company[i].emp.emp_name);
                            	
                                printf("\n Enter Employee Department: ");
                                scanf("%s", Company[i].emp.department);
                            	
                                printf("\n Enter Employee Experience: ");
                                scanf("%s", Company[i].emp.experience);
                            	
                                printf("\n Enter Employee Salary: ");
                                scanf("%s", Company[i].emp.emp_salary);
                            }
                            
                            printf("\n Successfully Add Details!!");
                            printf("\n Thank You!!");
                            
                            // Writing to file
                            for (i = 0; i < add_emp_hr_num; i++) {
                                fprintf(file, "Employee: Name:  %s Department: %s Experience: %s Salary: %s\n", Company[i].emp.emp_name, Company[i].emp.department, Company[i].emp.experience, Company[i].emp.emp_salary);
                            }
                            break;

                        case 2:// Add Tech Department Employee Details
                            printf("\n Enter Number: ");
                            scanf("%d", &add_emp_tech_num);
                            
                            for (i = 0; i < add_emp_tech_num; i++) {
                                printf("\n Enter Employee Name: ");
                                scanf("%s", Company[i].emp.emp_name);
                            	
                                printf("\n Enter Employee Department: ");
                                scanf("%s", Company[i].emp.department);
                            	
                                printf("\n Enter Employee Experience: ");
                                scanf("%s", Company[i].emp.experience);
                            	
                                printf("\n Enter Employee Salary: ");
                                scanf("%s", Company[i].emp.emp_salary);
                            }
                            
                            printf("\n Successfully Add Details!!");
                            printf("\n Thank You!!");
                            
                            // Writing to file
                            for (i = 0; i < add_emp_tech_num; i++) {
                                fprintf(file, "Employee: Name:  %s Department: %s Experience: %s Salary: %s\n", Company[i].emp.emp_name, Company[i].emp.department, Company[i].emp.experience, Company[i].emp.emp_salary);
                            }
                            break;
                    }

                    break;

                case 3: // Add Interns
                    printf("\n Which department Intern do you want to add? ");
                    printf("\n 1. HR department \n 2. Tech department");
                    printf("\n Enter Number: ");
                    scanf("%d", &add_intern_details);
                    
                    printf("\n How many details do you want to add? ");
                    switch (add_intern_details) {
                        case 1: // Add HR Department Intern Details
                            printf("\n Enter Number: ");
                            scanf("%d", &add_hr_intern);
                            
                            for (i = 0; i < add_hr_intern; i++) {
                                printf("\n Enter Intern Name: ");
                                scanf("%s", Company[i].intern.intern_name);
                            	
                                printf("\n Enter Intern Department: ");
                                scanf("%s", Company[i].intern.department);
                            	
                                printf("\n Enter Intern Salary: ");
                                scanf("%s", Company[i].intern.intern_salary);
                            }
                            
                            printf("\n Successfully Add Details!!");
                            printf("\n Thank You!!");
                            
                            // Writing to file
                            for (i = 0; i < add_hr_intern; i++) {
                                fprintf(file, "Intern: Name: %s Department: %s Salary: %s \n", Company[i].intern.intern_name, Company[i].intern.department, Company[i].intern.intern_salary);
                            }
                            break;

                        case 2: // Add Tech Department Intern Details
                            printf("\n Enter Number: ");
                            scanf("%d", &add_intern);
                            
                            for (i = 0; i < add_intern; i++) {
                                printf("\n Enter Intern Name: ");
                                scanf("%s", Company[i].intern.intern_name);
                            	
                                printf("\n Enter Intern Department: ");
                                scanf("%s", Company[i].intern.department);
                            	
                                printf("\n Enter Intern Salary: ");
                                scanf("%s", Company[i].intern.intern_salary);
                            }
                            
                            printf("\n Successfully Add Details!!");
                            printf("\n Thank You!!");
                            
                            // Writing to file
                            for (i = 0; i < add_intern; i++) {
                                fprintf(file, "Intern: Name: %s Department: %s Salary: %s \n", Company[i].intern.intern_name, Company[i].intern.department, Company[i].intern.intern_salary);
                            }
                            break;
                    }
                    break;

                default:
                    printf("\n Invalid Input.");
                    break;
            }
            fclose(file);
            break;
            
        case 2: // Check Details
            printf("\n 1. CEO \n 2. Manager \n 3. Employee \n 4. Intern");
            printf("\n Choose Number: ");
            scanf("%d", &choose_checkDetails);

            switch (choose_checkDetails) {
                case 1: // CEO can view all details
                    printf("\n Enter Password: ");
                    scanf("%d", &input_pass);

                    if (ceo_pass == input_pass) {
                        printf("\n Successfully Logged In as CEO\n");
                        file = fopen("company_data.txt", "r");
                        while ((c = getc(file)) != EOF) {
                            printf("%c", c);
                        }
                        fclose(file);
                    } else {
                        printf("\n Invalid Password");
                    }
                    break;

                case 2: // Manager can view specific details
                    printf("\n Which department are you managing?");
                    printf("\n 1. HR Department \n 2. Tech Department");
                    printf("\n Choose Number: ");
                    scanf("%d", &choose_manager_department);

                    switch (choose_manager_department) {
                        case 1: // HR Manager can view HR Employees and HR Interns
                            printf("\n HR Department");
                            printf("\n Enter Password: ");
                            scanf("%d", &hr_manage_pass);

                            if (hr_manage_pass == hr_manager_pass) {
                                printf("Successfully Logged In as HR Manager\n");
                                file = fopen("company_data.txt", "r");
                                while ((c = getc(file)) != EOF) {
                                    printf("%c", c);
                                }
                                fclose(file);
                            } else {
                                printf("Invalid Password");
                            }
                            break;

                        case 2: // Tech Manager can view Tech Employees and Tech Interns
                            printf("\n Tech Department");
                            printf("\n Enter Password: ");
                            scanf("%d", &tech_manager_pass);

                            if (tech_manager_pass == tech_manage_pass) {
                                printf("Successfully Logged In as Tech Manager\n");
                                file = fopen("company_data.txt", "r");
                                while ((c = getc(file)) != EOF) {
                                    printf("%c", c);
                                }
                                fclose(file);
                            } else {
                                printf("Invalid Password");
                            }
                            break;
                    }
                    break;

                case 3: // Employee can view their own department details
                    printf("\n Which Department are you in?");
                    printf("\n 1. HR Department \n 2. Tech Department");
                    printf("\n Choose Number: ");
                    scanf("%d", &choose_employee_department);

                    switch (choose_employee_department) {
                        case 1: // HR Employee can view HR Employee details
                            printf("\n HR Department Employee");
                            printf("\n Enter Password: ");
                            scanf("%d", &hr_emp_pass);

                            if (hr_emp_pass == hr_employee_pass) {
                                printf("Successfully Logged In as HR Employee\n");
                                file = fopen("company_data.txt", "r");
                                while ((c = getc(file)) != EOF) {
                                    printf("%c", c);
                                }
                                fclose(file);
                            } else {
                                printf("Invalid Password");
                            }
                            break;

                        case 2: // Tech Employee can view Tech Employee details
                            printf("\n Tech Department Employee");
                            printf("\n Enter Password: ");
                            scanf("%d", &tech_emp_pass);

                            if (tech_emp_pass == tech_employee_pass) {
                                printf("Successfully Logged In as Tech Employee\n");
                                file = fopen("company_data.txt", "r");
                                while ((c = getc(file)) != EOF) {
                                    printf("%c", c);
                                }
                                fclose(file);
                            } else {
                                printf("Invalid Password");
                            }
                            break;
                    }
                    break;

                case 4: // Intern can view only their own department's intern details
                    printf("\n Which Department Intern are you?");
                    printf("\n 1. HR Department Intern \n 2. Tech Department Intern");
                    printf("\n Choose Number: ");
                    scanf("%d", &choose_interns_department);

                    switch (choose_interns_department) {
                        case 1: // HR Intern can view HR Intern details
                            printf("\n HR Department Intern");
                            printf("\n Enter Password: ");
                            scanf("%d", &intern_hr_department_pass);

                            if (intern_hr_department_pass == intern_hr_pass) {
                                printf("Successfully Logged In as HR Intern\n");
                                file = fopen("company_data.txt", "r");
                                while ((c = getc(file)) != EOF) {
                                    printf("%c", c);
                                }
                                fclose(file);
                            } else {
                                printf("Invalid Password");
                            }
                            break;

                        case 2: // Tech Intern can view Tech Intern details
                            printf("\n Tech Department Intern");
                            printf("\n Enter Password: ");
                            scanf("%d", &intern_tech_password);

                            if (intern_tech_password == intern_tech_pass) {
                                printf("Successfully Logged In as Tech Intern\n");
                                file = fopen("company_data.txt", "r");
                                while ((c = getc(file)) != EOF) {
                                    printf("%c", c);
                                }
                                fclose(file);
                            } else {
                                printf("Invalid Password");
                            }
                            break;
                    }
                    break;

                default:
                    printf("\n Invalid Input");
                    break;
            }
            break;
        
        case 3: // Exit
            printf("\n Exiting Program...");
            break;

        default:
            printf("\n Invalid Input.");
            break;
    }
}
