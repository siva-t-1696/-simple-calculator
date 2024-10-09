# -simple-calculator
Assignment: Simple Command-Line Calculator
Using Git and C
Overview
This assignment focuses on developing a simple command-line calculator in C, which includes the basic arithmetic
operations: Addition, Subtraction, Multiplication, and Division. You, as the Team Lead, are responsible for managing
the team, coordinating work among team members, reviewing their contributions, and ensuring the project is
completed on time.
Each team consists of:
• 1 Team Lead (you)
• 3 Employees (your team members)
You will manage the team’s repository, assign tasks, and merge the final code into the main branch after reviewing
your team’s contributions.
Project Description
You are tasked with building a Command-Line Calculator that supports the following operations:
1. Addition (+)
2. Subtraction (-)
3. Multiplication (*)
4. Division (/), including handling division by zero.
The calculator will accept three command-line arguments:
1. First number
2. Operator (+, -, *, /)
3. Second number
The calculator will then output the result based on the input.
Example Usage
./calculator 5 + 3
Result: 8.00
Roles and Responsibilities
Team Lead Responsibilities:
1. Set up the Git repository.
2. Assign specific tasks to your team members.
3. Review the code contributions from your team.
4. Merge the code into the main branch after testing and validation.
5. Ensure that the team follows Git best practices and commits frequently.
Employee Responsibilities:
1. Implement the assigned functions (as explained below).
2. Test their functions to ensure correctness.
3. Commit code frequently with meaningful commit messages.
4. Push code to their respective branches and submit a Pull Request (PR) for review.
Git Workflow
1. Initialize the Repository:
o As the Team Lead, create a repository named simple-calculator and share access with your team
members.
2. Branching:
o Team members will each create their own feature branch.
o Each branch should be merged back into the main branch only after code review.
3. Task Assignment:
o Employee 1: Implement Addition and Subtraction.
o Employee 2: Implement Multiplication and Division (ensure division by zero is handled).
o Employee 3: Create the input validation logic to ensure correct input (numbers and valid operators)
and handle error messages.
4. Code Review & Merging:
o Each team member submits their code via a Pull Request (PR).
o You, as the Team Lead, review the PRs and suggest improvements if necessary.
o After approval, you will merge the PR into the main branch.
Steps for Team Lead
1. Step 1: Set Up the Git Repository
o Create the repository on GitHub or any Git platform of your choice.
o Create a README.md file to explain the project and the basic structure of the calculator.
o Push the initial structure to the main branch.
2. Step 2: Define the Project Structure
o Share the repository link with your team.
o Define the basic structure of the project:
▪ main.c file: Contains the main function and skeleton for handling operations.
▪ Create an empty functions.h header file that will later hold the function declarations.
3. Step 3: Assign Tasks to Your Team
o Assign tasks to the team members as described below:
▪ Employee 1: Implement add() and subtract() functions.
▪ Employee 2: Implement multiply() and divide() functions (with division by zero handling).
▪ Employee 3: Implement input validation (validate that the input consists of valid numbers
and operators).
4. Step 4: Branching and Development
o Instruct your team members to create separate branches for their tasks:
▪ feature/addition-subtraction for Employee 1
▪ feature/multiplication-division for Employee 2
▪ feature/input-validation for Employee 3
o Each employee will work on their branch, commit their work, and push to the repository.
5. Step 5: Code Review and Merging
o Once team members complete their tasks, they will open a Pull Request (PR).
o Review each PR carefully:
▪ Check for proper implementation.
▪ Verify that there are no errors and that the functions work as expected.
▪ Suggest changes if needed.
o After the PR is approved, merge it into the main branch.
6. Step 6: Final Testing and Submission
o Once all tasks are merged, test the final version of the calculator on the main branch.
o Ensure that the calculator works correctly with valid input and handles errors appropriately (e.g.,
division by zero).
o Push the final version to the repository.
Task Breakdown for Employees
Employee Branch Task
Employee
1
feature/addition-subtraction Implement add() and subtract() functions.
Employee
2
feature/multiplicationdivision
Implement multiply() and divide() functions. Handle
division by zero.
Employee
3
feature/input-validation Implement input validation and error handling. Ensure
correct input format.
Evaluation Criteria
• Functionality: Does the calculator work as expected for all operations?
• Error Handling: Does it handle invalid inputs and division by zero?
• Git Usage: Did the team follow the proper Git workflow (branches, commits, PRs)?
• Code Quality: Is the code well-organized, modular, and follows good coding practices?
Best Practices
1. Frequent Commits: Encourage your team to commit often with clear messages.
2. Code Review: Always review the code before merging.
3. Communication: Maintain clear communication with your team members to ensure smooth progress.
Deliverables
1. A fully functional command-line calculator program.
2. Final Git repository with the merged code.
3. Each team member’s contribution reflected in the Git history (commits).
