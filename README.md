# Task Buddy
 
 > Authors: [Allison Chu](https://github.com/allisonchuu) [Juan Salas](https://github.com/lightsofpeace) [Majd Kawak](https://github.com/mkawak) [Christopher Wong](https://github.com/c24wong)

## Project Description

 > * Why is it important or interesting to you?
 * The final project as a whole is significant due to the experience of working in a group format on a larger scale project, the ability to meet deadlines, as well as learning and implementing better Software Development Life Cycles.
 * Specifically to the construction of the Task Manager, as students or developers, organization is essential. The ability to layout deadlines, important dates for tests, and just budgeting time in general are all points that can be solved through said program. Having different categories of tasks, helps separate by types or by importance, allowing for more specified organization. 

 > * What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 * [C++](https://www.cplusplus.com) - We plan to use C++ as the primary language because it allows us to take better control of our data.
 * [Hammer and Git](https://git-scm.com/) - We will use Hammer to program and help us maneuver in the Git environment and facilitate branching and merging.
 * [Github](https://github.com/cs100/final-project-mkawa025-allisonchuu-c24wong-lightof) - We will also use Github as a main hub to house our work, Github allows us to have adequate communication with each other about what needs to be done through the Kanban Boards.
 * [Discord](https://discord.com) - Lastly we will use Discord as a meeting place to hold scrum meetings and to be able to communicate with more clarity and more frequently.
 * What will be the input/output of your project? What are the features that the project provides?
 * First we need to get a username (maybe a password protected). Our basic inputs would be adding tasks to lists created by our user as well as creating lists. Every task would have the option to have sub tasks, modifying tasks as well as lists. Finally saving our objects to text files(read and write). For output, user would have the option to list all task lists or tasks only due today for example.
 * Task Buddy features the ability to create tasks based on need. Each task includes a title, description, due date. Tasks also have the option to include classification, priority, and duration. Task Buddy allows for the creation of task lists as well as nested tasks. Users can display, edit, and delete tasks/task lists. As well as undo them.
  
 > ## Phase II
## Class Diagram

TaskBuddy is our client program, users can only interacts with this class directly and nothing else. Our users should create a UserAccount to be able to use our program. Menu class has all menus for basic input and output. TaskList is a composite class contained in UserAccount, UserAccount could create as many TaskList as needed. Task is a composite class contained in TaskList, while SubTask is a child class of Task. Lastly we have Data & Time which are composited contained in Task and SubTask.
<img src="UML.png?raw=true" width="1000">
 
 > ## Phase III
 ## Project Design Pattern(s)
 > The design pattern we are using to implement TaskBuddy is the Itterator Design Pattern. We picked this pattern because we are allowing our Tasks to have Sub-Tasks and so need to be able to itterate through them as we display them all. We believed this would be a good feature to implement in order to provide a way for users to both create task lists made of tasks and allow those tasks to have sub-tasks. The pattern allowed us to clearly see the relationships between the different components of our project.

 
 > ## Final deliverable
 > All group members will give a demo to the TA/reader during lab time. The TA/reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
