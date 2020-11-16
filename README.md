 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\<"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
# Performance Tracker
 > Authors: \<[Cindy Ho](https://github.com/cho102)\>\<[Denise Chan](https://github.com/denisechan1)\>\<[Euijin (Ruth) Hwang]( https://github.com/ruthhwang)\>
 
 > You will be forming a group of **THREE** students and work on an interesting project that you will propose yourself (in this `README.md` document). You can pick any project that you'd like, but it needs ot implement three design patterns. Each of the members in a group is expected to work on at least one design pattern and its test cases. You can, of course, help each other, but it needs to be clear who will be responsible for which pattern and for which general project features.
 
 > ## Expectations
 > * Incorporate **three** distinct design patterns, *two* of the design patterns need to be taught in this course:
 >   * Composite, Strategy, Abstract Factory, Visitor
 > * All three design patterns need to be linked together (it can't be three distinct projects)
 > * Your project should be implemented in C/C++. If you wish to choose anoher programming language (e.g. Java, Python), please discuss with your lab TA to obtain permission.
 > * You can incorporate additional technologies/tools but they must be approved (in writing) by the instructor or the TA.
 > * Each member of the group **must** be committing code regularly and make sure their code is correctly attributed to them. We will be checking attributions to determine if there was equal contribution to the project.

## Project Description
 > * Many students enjoy listening to music for all activites - sleeping, working out, studying, hanging out with friends. We've found that people have different playlists for different scenarios. We want to provide a way to combine people's love of music with productivity. Our project will help the user stay organized and on track during the week, by setting a countdown for the hours they want to work for, organize their tasks, and provide them with a variety of playlists to use while they execute their work each week. 
 > * This project is important to us because as students, productivity is always applicable to our daily lives. Students struggle with feeling the need to be productive in every minute and aspect of their lives. When discussing project ideas, we discussed a mutual love of music. We wanted to combine our love of music and need that many students feel to be productive in one place. That way students can enjoy their daily lives with the music they enjoy. 
 > * Tools We Will Be Using: 
 >   * C++ - This is the language we will be using to implement the project.
 > * Project IO: 
 >   * Input: Initially, we will ask the user for a number of hours they want to work for, for that certain week. That can either be for working out, studying, or both. Then, we will ask them to input their tasks for the week. Finally, we will ask them to choose a playlist that they would like to listen to as they finish their tasks.
 >   * Output: The output will be a "to-do list" of some sort that will list the tasks that the user still needs to complete for the week. The program will also output a playlist of the user's choosing. 
 > * 3 Design Patterns We Will Be Implementing:
 >   * Strategy: We will use this pattern to create multiple playlists of different genres. This pattern is perfect for implementing our playlists because each playlist will have the same functions, just different contents. 
 >   * Composite: We will use this pattern to create a hierarchy of different categories (i.e. workout, finals, subjects, etc.) and tasks in which the user would like to implement. It will allow the user to input the number of tasks and separate them into different categories. The category composite object can contain several subcategories as well as different tasks. In these subcategories, it can also contain smaller tasks as well. 
 >   * Iterator: We will use this pattern to keep track of the the amount of time the user has worked/still needs to work for the week. 

 > ## Phase II
 > In addition to completing the "Class Diagram" section below, you will need to 
 > * Set up your GitHub project board as a Kanban board for the project. It should have columns that map roughly to 
 >   * Backlog, TODO, In progress, In testing, Done
 >   * You can change these or add more if you'd like, but we should be able to identify at least these.
 > * There is no requirement for automation in the project board but feel free to explore those options.
 > * Create an "Epic" (note) for each feature and each design pattern and assign them to the appropriate team member. Place these in the `Backlog` column
 > * Complete your first *sprint planning* meeting to plan out the next 7 days of work.
 >   * Create smaller development tasks as issues and assign them to team members. Place these in the `Backlog` column.
 >   * These cards should represent roughly 7 days worth of development time for your team, taking you until your first meeting with the TA
## Class Diagram
 > Include a class diagram(s) for each design pattern and a description of the diagram(s). This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper OMT notation (as discussed in the course slides). You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description). 
 
 ![FinalProject Composite Diagram](https://user-images.githubusercontent.com/57569111/99162075-40e75700-26ae-11eb-95d7-19782f0eda34.png)
 ![CS100- FP Part II](https://user-images.githubusercontent.com/72418204/99206088-5d979380-276f-11eb-97b5-d66721bf73af.jpg)

 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
