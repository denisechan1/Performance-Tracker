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
 > * Many students enjoy listening to music for all activites - sleeping, working out, studying, hanging out with friends. We've found that people have different playlists for different scenarios. We want to provide a way to combine people's love of music with productivity. Our project will take in the amount of time our user wants use for a certain activity, and create a playlist that best fits that activity based on the song's characteristics. This playlist will be the exact time of the 
 > * This project is important to us because as students, productivity is always applicable to our daily lives. Students struggle with feeling the need to be productive in every minute and aspect of their lives. When discussing project ideas, we discussed a mutual love of music. We wanted to combine our love of music and need that many students feel to be productive in one place. That way students can enjoy their daily lives with the music they enjoy. 
 > * Tools We Will Be Using: 
 >   * C++ - This is the language we will be using to implement the project.
 >   * [Spotify API](https://developer.spotify.com/documentation/web-api/reference/tracks/) - We will be using the Audio Features & Analysis API from 	Spotify to create a playlist that will suit each category in the program. The API will allow us to analyze songs based on the tempo and mood that will better fit each category.
 > * Project IO: 
 >   * Input: From the user, we will ask them for which category they would like to use the application for such as courses, workouts, etc. and how long they would like to complete each task.
 >   * Output: The output would be a music playlist of a specific mood that matches the category the user chose that will play for a duration of time. In between there will be small pauses or breaks that will allow the user to rest or cool down so as to not tire them out. It will also feature a countdown timer that shows how much longer they will need to study. It will also output a guide of how much time is needed to allocate for each task a day.
 > * 3 Design Patterns We Will Be Implementing:
 >   * Abstract Factory: We will use this patten to make playlists based on data from the Spotify Audio Features and Analysis API. This design pattern is one of the best ways to make objects. We will create different object playlists based on genre and moods. However, for all of the playlists, we will be collecting data on the song names and song duration. 
 >   * Composite: We will use this pattern to create a hierarchy of different categories and/or tasks/courses in which we will use the timer for. Each category, like studying and workout, will have its own music that is catered towards its use. Along with this, each category or task will have the designated amount of time in which they want to spend on it as well as when they should be done with the task. For example, if the user have midterms coming up for their classes, they can create multiple categories based on the course (i.e Math, CS) with how many days until their exam. Within these categories, they could also add subclasses like specific topics for each class they want to study. After that, we will create a "study guide" to show how much time they should study for each subject for each day until D-Day.
 >   * Iterator: We will use this pattern to output the playlist information and create a countdown timer. The iterator will go thorugh the specific playlist class of the user's genre choice and output the titles of the songs listed in that playlist. Another itertor will keep track of the countdown of the user's workout/study time goals of the week.

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
 
