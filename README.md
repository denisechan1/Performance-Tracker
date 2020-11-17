
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
 > * Many students enjoy listening to music for all activites - sleeping, working out, studying, hanging out with friends. We've found that people have different playlists for different scenarios. We want to provide a way to combine people's love of music with productivity. Our project will help the user stay organized and on track during the week, by organizing their tasks and providing them with a variety of playlists to use while they finish their work. 
 > * This project is important to us because as students, productivity is always applicable to our daily lives. Students struggle with feeling the need to be productive in every minute and aspect of their lives. When discussing project ideas, we discussed a mutual love of music. We wanted to combine our love of music and need that many students feel to be productive in one place. That way students can enjoy their daily lives with the music they enjoy. 
 > * Tools We Will Be Using: 
 >   * C++ - This is the language we will be using to implement the project.
 > * Project IO: 
 >   * Input: We will ask them to input their tasks for the week, for both working out and studying. We will also ask them to choose a playlist that they would like to listen to as they work on their tasks.
 >   * Output: The output will be the two "to-do lists", one for school and one for working out. The program will also output a playlist of the user's choosing. 
 > * 3 Design Patterns We Will Be Implementing:
 >   * Composite: We will use this pattern to create a hierarchy of different categories (i.e. workout, finals, subjects, etc.) and tasks in which the user would like to implement. It will allow the user to input the number of tasks and separate them into different categories. The category composite object can contain several subcategories as well as different tasks. In these subcategories, it can also contain smaller tasks as well. 
 >   * Abstract Factory: We will use this pattern to create the multiple playlists the user can choose from, to display and listen to. We will have a base Playlist class, and create a family of related playlists, the only difference between them being the genre that it falls under. The different objects will be Hip-Hop Playlist, Relaxing Playlist, Pop Playlist, Lo-Fi Playlist, RnB Playlist, and Nature Playlist.
 >   * Strategy: 

 > ## Phase II
## Class Diagram 
![FinalProject Composite Diagram](https://user-images.githubusercontent.com/57569111/99225029-3c996780-279c-11eb-915f-6888b290cf1d.png)
> The composite class diagram shows the relationship between the component(UserGuide), composite (Category) and the leaf (Tasks). The user can input as many categories and tasks they would like to do, how long they want to spend on the task or each category each day and D-Day, which is when they want to complete the task by. The composite object, Category, can contain several more categories and tasks which are then added into a vector. By getting the hours per day and D-Day, we can calculate how much time should be allocated for each task per day that will best fit the user's schedule. The user is also able to print out a guide that shows what task they should do for each day and how long they should spend on it. The guide is printed recursively.

 
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
 
