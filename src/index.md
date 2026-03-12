![doodle](./doodle.jpg)

# UCSD CSE29 WI26 Syllabus and Logistics

[Joe Gibbs Politz](https://jpolitz.github.io) (Instructor)

CSE 29 introduces you to the broad field of systems programming, including 1)
the basics of how programs execute on a computer, 2) programming in C with
direct access to memory and system calls, 3) software tools to manage and
interact with code and programs. All very cool stuff that makes every programmer
better!

# <a name="basics"></a> Basics

- Lecture (attend the one you're enrolled in):
  - A section: Tue/Thu 11:00am, Center Hall 115
  - B section: Tue/Thu 12:30pm, Center Hall 113
- Discussions:
  - A section: Tue 5:00pm, Pepper Canyon Hall 109
  - B section: Thu 5:00pm, Center Hall 212
- Labs: Wednesdays (check your schedule!). Either B240 or B250 in the [CSE building](https://map.concept3d.com/?id=1005#!m/164780?share)
- Exams:
  - Weeks 4 and 8: [AP&M Testing Center](https://map.concept3d.com/?id=1005#!m/167186?share), flexible scheduling on [PrairieTest](https://us.prairietest.com/)
  - Week 10: During your regularly-scheduled lab time
  - Finals week: In CSE labs scheduling instructions coming soon!
- Final exam: [AP&M Testing Center](https://map.concept3d.com/?id=1005#!m/167186?share), flexible scheduling in final exam week on [PrairieTest](https://us.prairietest.com/)
- Professor office hours (these are the standard times but check the calendar below for changes!)
  - Tuesday 2:30-3:30pm, CSE 3206 (advising focused, open to all students)
  - Wednesday 1:30-2:30pm CSE B270/tables outside labs (CSE29 students only)
- Office Hours: Refer to calendar
- Q&A forum: [Piazza](https://piazza.com/class/mjz0y0rvk9c2lw)
- PrairieLearn: [https://us.prairielearn.com](https://us.prairielearn.com)
- Textbook/readings: [Dive Into Systems](https://diveintosystems.org/book/), plus additional readings we will assign
  - Free: [MIT Missing Semester](https://missing.csail.mit.edu/)
  - Not free but pretty cheap: [Julia Evans Zines](https://wizardzines.com/), especially [The Pocket Guide to Debugging](https://wizardzines.com/zines/debugging-guide/)
- Reference Sheets: [Google Doc](https://docs.google.com/document/d/1LbkMiVf9-d0Z21Xok-SUiLKItvoMmdYS0ADqMC_fsTI/edit?usp=sharing)

# Office Hours Calendar

<iframe src="https://calendar.google.com/calendar/embed?src=c_ae9767c348e966bfab21111de9970ad83a36f155ee0583d85874fde005ad9232%40group.calendar.google.com&ctz=America%2FLos_Angeles" style="border:solid 1px #777" width="800" height="600" frameborder="0" scrolling="no"></iframe>

# Schedule
- **Week 10 – Review and Wrapup**
  - **Lectures**
    - Tuesday
      - [Blank Handout](lec/03-10-review/lecture.pdf)
      - Code: [list.c](lec/03-10-review/list.c)
        [list-leak.c](lec/03-10-review/list-leak.c)
        [valgrind-leak.txt](lec/03-10-review/valgrind-leak.txt)
      - [Annotated Handout](lec/03-10-review/lecture_notes_mar10.pdf)
- **Week 9 – HTTP Servers**
  - **Lectures**
    - Tuesday
      - [Blank Handout](lec/03-03-server/lecture.pdf)
      - Code: [string-server1.c](lec/03-03-server/string-server1.c)
        [string-server2.c](lec/03-03-server/string-server2.c)
        [string-server3.c](lec/03-03-server/string-server3.c)
        [string-server4.c](lec/03-03-server/string-server4.c)
      - [Annotated Handout](lec/03-03-server/lecture_notes_mar3.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/13oUHTsClMGeZpmCkVAstra7QtYF3YBFUAvOPmqVw97Y/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/03-03-server/summary.pdf)
    - Thursday
      - [Blank Handout](lec/03-05-server2/lecture.pdf)
      - [Annotated Handout](lec/03-05-server2/lecture_notes_mar5.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1QkZczn_n8n9_uSZKUpKOG17w9WnIoHMody3HtW4Qokc/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/03-05-server2/summary.pdf)

- **Week 8 – Allocator Wrapup, More on System Calls, Practice**
  - **Readings & Resources** 
    - [Starting a Process](https://diveintosystems.org/book/C13-OS/impl.html)
    - [Debugging Memory with Valgrind](https://diveintosystems.org/book/C3-C_debug/valgrind.html)
    - [C Libraries](https://diveintosystems.org/book/C2-C_depth/advanced_libraries.html)
    - [C Libraries Continued](https://diveintosystems.org/book/C2-C_depth/advanced_writing_libraries.html#_c_libraries_)
  - **Lectures**
    - Tuesday
      - [Blank Handout](lec/02-24-vm/lecture.pdf)
      - [Annotated Handout](lec/02-24-vm/lecture_notes_feb24.pdf) (11am then 12:30pm)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1VWZV1NPNuXwpKBmIJb0yhiD95bgor4PwsnSPZ8Y0XZE/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/02-24-vm/summary.pdf)
    - Thursday
      - [Blank Handout](lec/02-26-badfree/lecture.pdf)
      - [Handout Code](lec/02-26-badfree/login.c)
      - [Annotated Handout](lec/02-26-badfree/lecture_notes_feb26.pdf)
      - [Lecture Summary Google Slides](      https://docs.google.com/presentation/d/1kcIVGQN4ioxXXbXiviZUgkOJYLkxPmMNJ2S4ZiBvzCg/edit?slide=id.g3c7c1cbecc9_0_23#slide=id.g3c7c1cbecc9_0_23)
      - [Lecture Summary Slides PDF](lec/02-26-badfree/summary.pdf)


- **Week 7 – Implementing an Allocator**
  - **Readings & Resources**
    - [The `void*` Type](https://diveintosystems.org/book/C2-C_depth/advanced_voidstar.html)
    - [Pointer Arithmetic](https://diveintosystems.org/book/C2-C_depth/advanced_pointer_arithmetic.html)
    - [Virtual Memory](https://diveintosystems.org/book/C13-OS/vm.html)
  - **Lectures**
    - Tuesday
      - Review Questions [PDF](lec/02-17-malloc-implementation/review_questions.pdf), [Slides](https://docs.google.com/presentation/d/1KqH_CPVZItowwm-irWztXNMneCga-3zpU1j4FAbCZf8/edit?usp=sharing)
      - Heap Visualizer [HTML Doc](lec/02-17-malloc-implementation/viz.html) (Note: there may be bugs in this implementation, the specification given in the PA is the ground truth)
      - Lecture Videos
        - [video 1](https://drive.google.com/file/d/1KSIkf-MOPv9Alhk9eXuDPPYRXKEfLB2n/view?usp=sharing&t=569) watch from time 9:30-end
        - [video 2](https://drive.google.com/file/d/1ip_uLakqDSI6DSSJksEkF7YSMeUykH15/view?usp=sharing&t=120) watch from beginning to ≈15 minutes in.
      - [Notes from video 1](lec/02-17-malloc-implementation/annotated-lecture-fa24-w7w.pdf)
    - Thursday
      - [Blank Handout](lec/02-19-malloc-impl/lecture.pdf)
      - [Annotated Handout](lec/02-19-malloc-impl/annotated.pdf) (both sections)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1ZE3LYZzPTIMl-A-OWuRS23gqPzv0X-DeRAgWI-M2FX0/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/02-19-malloc-impl/summary.pdf)

- **Week 6 – Actually Structs, Heap Memory**
  - **Readings and Resources**
    - Same as week 5
    - [Python UTF8 Struct: cpython/unicodeobject.h](https://github.com/python/cpython/blob/main/Include/cpython/unicodeobject.h#L166)
  - **Lectures**
    - Tuesday
      - [Blank Handout](lec/02-10-structs/lecture.pdf)
      - [Annotated iPad notes](lec/02-10-structs/lecture_notes_feb10_both.pdf) (both sections 11am then 12:30pm)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1vX5cVov154WRVN_ZZ4ZY66niOqQPyqdqsmBCLHBQh1s/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/02-10-structs/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/02-10-structs/summary-speaker.pdf)
    - Thursday
      - [Blank Handout](lec/02-12-struct-malloc/lecture.pdf)
      - [Annotated iPad notes](lec/02-12-struct-malloc/lecture_notes_feb12.pdf) (both sections 11am then 12:30pm)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1KUFvYVgKYhBwB0HUr18S-yZQBkx3BALEiemVl3rW-eA/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/02-12-struct-malloc/summary.pdf)

- **Week 5 – Structs, Memory Management**
  - **Readings**
    - [Structs](https://diveintosystems.org/book/C2-C_depth/structs.html)
    - [Dynamic Memory Allocation](https://diveintosystems.org/book/C2-C_depth/dynamic_memory.html)
    - [(For a deep dive) The Lost Art of C Structure Packing](http://www.catb.org/esr/structure-packing/)
  - **Lectures**
    - Tuesday
      - [Blank Handout](lec/02-03-fork-exec-shell/lecture.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1Ke-sEY9GUbXDj0glFAo1yA52GrBWku9VPTn4l5qAK3w/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/02-03-fork-exec-shell/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/02-03-fork-exec-shell/summary-speaker.pdf)
      - [layout.c (code from handout)](lec/02-03-fork-exec-shell/layout.c)
      - Notes on exam from Joe ---> [exam.txt](lec/02-03-fork-exec-shell/exam.txt)
      - Annotated Handout [12:30pm](lec/02-03-fork-exec-shell/lecture_notes_feb03_1230.pdf)
      - Chalkboard (11am) [Memory](lec/02-03-fork-exec-shell/chalkboard1.png), 
      [Memory Extended](lec/02-03-fork-exec-shell/chalkboard2.png),
       [fork()](lec/02-03-fork-exec-shell/chalkboard3.png), 
       [execvp(..)](lec/02-03-fork-exec-shell/chalkboard4.png), 
       [Full Board](lec/02-03-fork-exec-shell/chalkboard5.png)
      - Code [shell.c](lec/02-03-fork-exec-shell/shell.c)
             [shell-complete.c](lec/02-03-fork-exec-shell//shell-complete.c)
    - Thursday
      - Review Question materials
        - [reviewq1.txt](lec/02-05-fork-exec-more/reviewq1.txt)
          [reviewq2.txt](lec/02-05-fork-exec-more/reviewq.txt)  
          [fork2.c](lec/02-05-fork-exec-more/fork2.c)  
          [exec-arg0.c](lec/02-05-fork-exec-more/exec-arg0.c)
          [arg0.c](lec/02-05-fork-exec-more/arg0.c)
          [exec-arg0-nonsense.c](lec/02-05-fork-exec-more/exec-arg0-nonsense.c)
      - Code
		- 11am [shell.c](lec/02-05-fork-exec-more/shell-a.c)
        - 12:30pm [shell.c](lec/02-05-fork-exec-more/shell.c)
          [vm.c](lec/02-05-fork-exec-more/vm.c)  
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/16zye6BwTkUKqpIHdlT3P4V_ltnsDST88e7NFxjuDvqk/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/02-05-fork-exec-more/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/02-05-fork-exec-more/summary-speaker.pdf)

- **Week 4 – Processes and Memory**
  - **Readings**
    - [Processes](https://diveintosystems.org/book/C13-OS/processes.html), especially [fork](https://diveintosystems.org/book/C13-OS/processes.html#_fork) and [exec](https://diveintosystems.org/book/C13-OS/processes.html#_exec)
    - [C Structs](https://diveintosystems.org/book/C2-C_depth/structs.html)
    - [`make` and Makefiles](https://diveintosystems.org/book/Appendix2/makefiles.html#_make_and_makefiles)
  - **Lectures**
    - Tuesday
      - [Blank Handout](lec/01-27-sizeof-arrays/lecture.pdf)
      - Annotated Handout [11am](lec/01-27-sizeof-arrays/lecture_notes_jan27_1100.pdf) [12:30pm](lec/01-27-sizeof-arrays/lecture_notes_jan27_1230.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1yDffmWfC8KKirp6yNKtonhtnEWK10dGueqym_dPwLF4/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/01-27-sizeof-arrays/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/01-27-sizeof-arrays/summary-speaker.pdf)
    - Thursday
      - [Blank Handout](lec/01-29-strktok-interior-pointer/lecture.pdf)
      - Annotated Handout [11am](lec/01-29-strktok-interior-pointer/lecture_notes_jan29_1100.pdf)[12:30pm](lec/01-29-strktok-interior-pointer/lecture_notes_jan29_1230.pdf)
      - Code
        - strtok.c [11am](lec/01-29-strktok-interior-pointer/strtokA.c) [12:30pm](lec/01-29-strktok-interior-pointer/strtok.c)
        - shell.c [11am](lec/01-29-strktok-interior-pointer/shellA.c) [12:30pm](lec/01-29-strktok-interior-pointer/shell.c)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1jIK6wvp3Oft6-YXVM7BesZA2o_Jtr4lqy59Upjsz-gA/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/01-29-strktok-interior-pointer/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/01-29-strktok-interior-pointer/summary-speaker.pdf)

- **Week 3 – Where (Some) Things Are in Memory**
  - **Readings**
    - [Debugging with GDB](https://diveintosystems.org/book/C3-C_debug/gdb.html)
    - [Pointers and Functions](https://diveintosystems.org/book/C2-C_depth/pointers_functions.html)
  - **Lectures**
    - Tuesday
      - [Blank Handout](lec/01-20-arrays/lecture.pdf)
      - Annotated Handout: [11am](lec/01-20-arrays/lecture_notes_jan20_1100.pdf) [12:30pm](lec/01-20-arrays/lecture_notes_jan20_1230.pdf)
        - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/17LsYuKwBtcFxbuvJBuOh1g5mLLPJm433dT28MdOS4FQ/edit?usp=sharing)
        - [Lecture Summary Slides PDF](lec/01-20-arrays/summary.pdf)
        - [Lecture Summary with Speaker Notes PDF](lec/01-20-arrays/summary-speaker.pdf)
      - Code
        - pre-lecture: [analyzer.c](lec/01-20-arrays/analyzer.c)
        - 11am [analyzer.c](lec/01-20-arrays/from-ieng6/analyzer-A.c) [adjacent.c](lec/01-20-arrays/from-ieng6/adjacent-A.c)
        - 12:30pm [analyzer.c](lec/01-20-arrays/from-ieng6/analyzer-B.c) [adjacent.c](lec/01-20-arrays/from-ieng6/adjacent-B.c)
    - Thursday
      - [Blank Handout](lec/01-22-arrays/lecture.pdf)
      - Annotated Handout: [11am](lec/01-22-arrays/lecture-notes-1-22-11am.pdf) [12:30pm](lec/01-22-arrays/lecture-notes-1-22-1230pm.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1Byl6c43wEjSAydtNbHaI3uOhc-ug6eYhMCS6gcNxoEg/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/01-22-arrays/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/01-22-arrays/summary-speaker.pdf)

- **Week 2: Numbers, Bitwise Representations, and UTF8**
  - **Readings**
    - [Binary and Data Representaion (Sec 4.1-4.6)](https://diveintosystems.org/book/C4-Binary/bases.html)
    - [Arrays in C](https://diveintosystems.org/book/C2-C_depth/arrays.html)
    - [Scanf](https://diveintosystems.org/book/C2-C_depth/IO.html#_scanf) and [fgets](https://diveintosystems.org/book/C2-C_depth/IO.html#_file_inputoutput) (though this week we'll only use `fgets` with `stdin`)
  - **Lecture Materials**
    - Tuesday
      - [Handout](lec\01-13-utf8\lecture.pdf)
      - [Annotated Handout](lec/01-13-utf8/lecture_notes_jan13_1230.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1cRRvTVp51jdFaTYUi8OXC87oPspze_PvLfmA-4wKvQs/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/01-13-utf8/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/01-13-utf8/summary-speaker.pdf)
    - Thursday
      - [Handout](lec/01-15-utf8analyzer/lecture.pdf)
      - Annotated Handout: [11am](lec/01-15-utf8analyzer/lecture_notes_jan15_1100.pdf) [12:30pm](lec/01-15-utf8analyzer/lecture_notes_jan15_1230.pdf)
      - Code: [11am](lec/01-15-utf8analyzer/utf8analyzer-filled-11.c) [12:30 pm](lec/01-15-utf8analyzer/utf8analyzer-filled-1230.c)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1Nd50vIY-Jpc0BkSI2Owg2HT0leJGeELi7-y2HfXWJcc/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/01-15-utf8analyzer/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/01-15-utf8analyzer/summary-speaker.pdf)

- **Week 1: Welcome, Strings and Bitwise Representations**
  - **Readings and Videos**
    - [The UNIX Command Line](https://diveintosystems.org/book/Appendix2/cmdln_basics.html)
    - [Arrays and Strings (In C)](https://diveintosystems.org/book/C1-C_intro/arrays_strings.html)
    - [Brief Bitwise Operators Intro](https://www.youtube.com/watch?v=iU-0YhRFf7Y)
    - [Counting 0 bits](https://www.youtube.com/watch?v=M5mVVJHpNQ8)
  - **Lecture Materials**
    - Tuesday
      - [Handout](lec/01-06-welcome/lecture.pdf)
      - Annotated Handout: [11am](lec/01-06-welcome/lecture_notes_jan6_11am.pdf) [12:30pm](lec/01-06-welcome/ScanJan06,2026Joe'sNotes.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1HU3oxK0Ll9bZU0Bfe_wApEpr22mc7FoXy2VItm80sQs/edit?usp=sharing)
      - [Lecture Summary](lec/01-06-welcome/summary.pdf)
    - Thursday
      - [Handout](lec/01-08-cstring/lecture.pdf)
      - Annotated Handout: [11am](lec/01-08-cstring/lecture_notes_jan8_11am.pdf) [12:30pm](lec/01-08-cstring/lecture_notes_jan8_1230pm.pdf)
      - [Lecture Summary Google Slides](https://docs.google.com/presentation/d/1JnVmaynuFIONcT_NwLhC26n0no-XZ0uqr4zjAQr_nZQ/edit?usp=sharing)
      - [Lecture Summary Slides PDF](lec/01-08-cstring/summary.pdf)
      - [Lecture Summary with Speaker Notes PDF](lec/01-08-cstring/summary-speaker.pdf)

# Course Components

There are three main parts of the course: **Assignments**, **Exams**, and
**Social Learning**.

## Assignments

The course has 5 **assignments** that involve programming and writing. For each
there will be:

- A **problem set** that has practice problems related to the assignment
- A **programming project** where you create a program that does something
  interesting and that we automatically test
- **Design questions** about the programming project

**Grading**: There are 6 points available for each assignment.

- **2** points for the corresponding problem set (2 points for fully correct and
  complete by the deadline, 1 point for somewhat complete at the deadline, 0 points for incomplete or very little completed at the deadline).
- **2** points for program correctness (2 points for perfect or nearly-perfect, 1 point
  for significant errors, 0 for programs that work on very few or no examples)
- **2** points for design questions (2 points for perfect or nearly-perfect, 1
  point for minor errors, 0 points for major errors or incomplete)

After each assignment is graded, you'll have a chance to _resubmit_ all
components based on the feedback you received, which will detail what you need
to do to increase your score. You can increase your score by up to **1** point
in each component on a resubmit.

This is also the only late policy for assignments. Unsubmitted assignments are
initially given a **0**, and can get a maximum of **3** points on resubmission.

## Exams

There will be 3 exams during the quarter and make-up opportunities in finals
week.

Exams will use a mix of the testing facility in [AP&M
B349](https://map.concept3d.com/?id=1005#!m/167186?share) (weeks 4 and 8), and
our regularly-scheduled lab times (week 10). You will schedule your week 4/8
exam on [PrairieTest](https://us.prairietest.com/) by logging in with your
@ucsd.edu account. You can schedule the exam at a time that's convenient for
you in the given exam week, and you will go to that lab and check in for your
exam at the time you picked. The exam will be proctored by staff from the
[Triton Testing Center](https://tritontesting.ucsd.edu/) (not by the course
staff from this course). No study aids or devices are allowed to be used in the
testing center. You will need only a photo ID and something to write with
(scratch paper is available on request). The Triton Testing Center has shared
a [document of rules and tips](./images/Helpful_Tips_CBTF.pdf) for using the
testing center.

The exams will be administered through
[PrairieLearn](https://www.prairielearn.com/about) and
[PrairieTest](https://us.prairietest.com). The exams will have a mix of
questions; they will typically include some that involve programming and
interacting with a terminal.

We'll know the precise scheduling by the end of week 1 for both the exams during
the quarter and the final exam.

Exams are (necessarily) cumulative. They typically focus on content that has
already had a due date (e.g. PAs, problem sets, design questions, and labs that
have their work due before the exam period starts), and typically _don't_ focus
on specific details only found in textbook chapters or mentioned
conversationally in lecture. However, that's only a statement about the overall
design, not a hard constraint: we will never promise that course content from any
particular week, lecture, assignment, textbook chapter, or other course
component _won't_ appear on an exam. We say this publicly in the syllabus to
avoid misunderstandings (“the professor/TA/my friend told me not to study
that”) and to make it clear that all the content matters (we wouldn't assign
it if it didn't).

## Social Learning

Learning (in college) is in part, a social process. Your engagement with it
forms part of your grade for the class.

### Lecture (Social Learning)

Lectures are designed to introduce you to concepts, show how I (Joe) approach
problems, give you a chance to ask questions about content, connect course
content to the world outside the classroom, talk to your classmates and the
staff, and provide an overarching story for the material.

Most lectures will come with two on-paper activities that are handed in for
credit:

- A _review check_, near the beginning of class. These serve mainly as a way to
  check in on content from previous lectures before starting the content for
  the day, and for us to get some information about how everyone is following
  along with lecture content. Don't think of them as quizzes, rather as an
  engagement check. You can discuss these with your classmates, and they are
  graded on completeness rather than correctness.
- An _exit slip_ at the end of class (last 5 minutes). These serve as a way to
  get feedback from you on the lecture; they will often ask you to restate or
  summarize a learning outcome, or say what the “fuzziest” concept from
  lecture was for you.

We say these will happen in “most” lectures because sometimes we may skip
one or both for various timing or logistics reasons.

**Grading**: Each lecture has 3 social learning points available:

- **2** for the review check (only 1 point if handed in but incomplete)
- **1** for the exit slip

If you miss either or both during class, you can submit the makeup assignment
later for **1 point total**. This is the only way to make up credit for missing a lecture.

The makeup assignment requires both the review check and exit slip,
regardless of whether you turned one in during class. So:

- If you only hand in one during class, you can submit the full makeup assignment to earn 2/3 points for that day.
- If you miss lecture entirely, you can submit the full makeup assignment to earn 1 point.

All resubmissions must be before the next lecture to count, with no exceptions.

### Labs (Social Learning)

The course's lab component meets for 2 hours. In each lab you'll switch between
working on your own, working in pairs, and participating in group discussions
about your approach, lessons learned, programming problems, and so on.

The lab sessions and groups will be led by TAs and tutors, who will note your
participation in these discussions for credit. Note that you must
**participate**, not merely **attend**, for credit.

**Grading**: For each lab there are 4 possible points to earn:

- **1** for being present
- **2** for being an active, professional, productive participant while present
- **1** for submitting and/or getting work checked off that was done in lab

If you miss lab, you can earn the submission/check-off point by submitting the
check off work **before the next Tuesday at 11am**, but cannot earn the 3
points related to participation. There is no way to make up a lab beyond this
1 point, even for illness, travel, or emergencies. Our preference would be to
require all 10 labs for an A, and have some kind of excused absences. However,
tracking excused absences doesn't really scale, so this policy is how we handle
it.

### Discussions (Social Learning)

There are discussions on Tuesdays and Thursdays, led by the course staff, for
going over problem set problems and the programming assignments.

**Grading**: Attendance is taken, and attending discussion gives 1 social
learning point.

## Grading

Each component of the course has a minimum achievement level to get an A, B, or
C in the course. You must reach that achievement level in _all_ of the
categories to get an A, B, or C.

- **A** achievement:
  - ≥85 social learning points (may adjust depending on the total number of
    available lecture points)
  - ≥27/30 assignment points
  - ≥10/12 exam points
- **B** achievement:
  - 70-84 social learning points
  - 23-26 assignment points
  - 8-9 exam points
- **C** achievement:
  - 55-69 social learning points
  - 20-23 assignment points
  - 6-7 exam points

Below C achievement (in any category) is an F/No Pass.

Pluses and minuses will be given based on performance on social learning and
assignments (exam grades will **not** be used to determine plus and minus
grades; this is to avoid extra load on retake testing). We don't publish the
exact cutoffs in advance.

Requests to change this grading policy (for a specific student or class-wide)
will be denied with a link to this syllabus section. Consider this: we may, as
instructors, decide for academic reasons that the most accurate way of
assigning letter grades in the class needs to change (and we tend to only make
changes that improve letter grades relative to this starting policy). However,
it would be inappropriate for us to do so in response to student requests: that
could create an appearance that we give students the grades they ask for rather
than the grades they earned.

# Policies and Perspective

## CSE29, Large Language Models, and You

Evidence suggests that experts can generate (some kinds of) programs more
quickly with the assistance of large language models. But, they did not
_become_ experts by using them.

We offer the following metaphor as guidance:

Consider physical conditioning, let's take running for fitness in particular.
There are many machines in the world that are remarkably effective at moving
people around: electric scooters for example. Taking a scooter for a few miles
gets you to your destination more quickly and less sweatily than running, but
completely misses the point of the run. The goal of running for fitness has
little to do with getting to a destination and everything to do with the
changes that happen _inside your body_. Many people can run the same miles on
the same road and get the benefits from it, despite them all doing the same
work that a machine (the scooter) could have done.

Fitness is just one example like this. Similar comparisons make sense for
learning to play an instrument, perform onstage, or upskill at games like
billiards, darts, or Fortnite.

The programming in this class is like running for fitness (doing the typing and
thinking on your own), not about getting to a destination quickly (handing in a
completed program). The answers to many programming problems are known, or
close-to-known, and many tools exist that can generate part or all of them, and
there are many people who can write them faster than you. We assign the work
not because knowing a solution is particularly important, but because _the act
of creating the solution changes you_.

So, you _should not_ use AI to generate code or prose for work in this class.

That said, it's relatively difficult for us to _detect_ AI usage on take-home
work. It's also useful to know what AI and code generation can do. So feel free
to experiment, and do not read this policy as _prohibiting_, or assigning
_formal consequences_ to LLM use. A good way to go about learning in this
course is to _do the work yourself first_, then go back and see how the LLM
would have done it. Then you may be able to notice things, like the LLM
generating extra unnecessary code, or doing something in a more or less complex
way than you did it, or maybe doing exactly what you did! The key thing is that
you developed a sense of what a solution was supposed to look like, rather than
trusting the version from the machine.

(Also, the exams require that you program on your own, without the aid of any AI
assistants.)

## Device Policy

To a large degree, you are responsible for managing your time, attention, and
learning in lecture, and I hesitate to make policies that attempt to govern or
restrict your choices with respect to note taking or device use. However,
lecture is a communal space, and your actions can affect others' learning. In
particular, what you have on your screen _may be unavoidably in the field of
view of other students_. Because of this, you are responsible for a fragment of
the attention of everyone in a cone of space behind you. With this in mind,
the policy for lecture is that _if you use a device, you must have
lecture-related content onscreen_. There is even [research that
shows](https://www.sciencedirect.com/science/article/pii/S0360131520301007)
that the content of screens in the classroom, even quite far away, can have a
detrimental affect on learning. If you cannot resist checking social media,
playing a game, or doing other off-topic tasks during lecture, sit in the back
2 rows so that you are only having an affect on your own attention, or the
attention of others with a similar mindset.

## Assignments and Academic Integrity

You can use code that we provide or that your group develops in lab as part of
your assignment. If you use code that you developed with other students (whether
in lab or outside it), got from Piazza, or got from the internet, say which
students you worked with and a sentence or two about what you did together in
`CREDITS.txt`. All of the _writing_ in assignments (e.g. in open-ended written
questions) must be your own.

You **can** use an AI assistant like ChatGPT or Copilot to help you author
assignments in this class. If you do, you are **required** to include in
`CREDITS.txt`:

- The prompts you gave to the AI chat, or the context in which you used Copilot
  autocomplete
- What its output was and how you changed the output after it was produced (if
  at all)

This helps us _all_ learn how these new, powerful, and little-understood tools
work (and don't).

If you don't include a `CREDITS.txt` and it's clear you included code from
others or from an AI tool, you may lose credit or get a 0 on the assignment, and
repeated or severe violations can be escalated to reports of academic integrity
violations.

## Exams and Academic Integrity

It is a violation of academic integrity to share details of _your_ exam with
others until after you receive your grade for it. Keep in mind that the exams
are randomized to discourage casual cheating, so your exam may not be the same
one that others see. It is a violation of academic integrity to communicate
with anyone other than the official proctors during the exam, or to use devices
other than the ones you are using to complete the exam.

## Lab and Professionalism

Lab work will be highly collaborative, and designed to encourage communication
between students. Some of the activities will have you talk to other students,
or exchange code, ideas, or commands with other students, and write down what
happened.

In all of this communication, remember to be polite, professional, and focus on
the work. A huge part of the job of a working software professional or
researcher is professional and clear communication.

Some tricks for this: avoid statements that reference the author of the code,
frame negative feedback as possible improvements or ways your expectations were
violated, and take responsibility for anything you don't understand.

Examples:

- Don't say “You made a mistake here: ...” Instead say “On line I expect the
  condition to be true but I think it will be false because XYZ ... we could
  demonstrate that by doing ABC.”
- Don't say “It seems like you don't know about...”, instead say “On line
  10-12, these 3 lines could be shortened into one line using `grep -r` instead
  of `find` followed by `grep`: ....” And use some judgment: it's likely that
  some of this advice is helpful and constructive, and some of it is just
  showing off.
- Don't say “This code is (going to be) slow...” Instead wait until you can run
  it and try an example that demonstrates it “This code took 10 seconds to run
  for input XYZ and that seems like a lot. When we were writing ... I think I
  noticed that we did X, if we did Y instead I think it will go faster
- Don't say “That conditional is ugly:...” Instead say “I find it easier to
  read these conditions when they are written as .... because ...” If you don't
  have a good explanation to put after the “because”, how do you know it's a
  good suggestion? Refer also to the advice about not showing off
- Don't say “You wrote lines 20-24 very confusingly.” Instead say “I'm having
  trouble understanding lines 20-24. It would help me to work through an
  example of how that part is supposed to work”

# FAQ/AFQ (Anticipated Frequent Questions)

**Q: I am waitlisted for one of the sections at position N. What should I do?**

Come to class and do all the work as usual (you will have Canvas access to get
all the needed links) so you can be up to speed if you do get a spot. This is
aligned with [official department
policy](https://cse.ucsd.edu/undergraduate/spring-2025-undergraduate-course-updates#LateAddPolicy).

We can't make accurate predictions about chances of getting into the course
from a specific waitlist position, or control that process as instructors.

**Can I attend a lab section other than the one I'm enrolled in?**

No, please do not try to do this. The lab sections have limited seating and are
full. We cannot accommodate switching.

**How can I switch sections?**

You have to drop and re-add (which may involve getting [back on] the waitlist). Sorry.

**Can I leave lab early if I'm done or have a conflict?**

The labs are designed to not be things you can “finish”. Labs have plenty of
extension and exploration activities at the end for you to try out, discuss,
and help one another with. Co-located time with other folks learning the same
things is precious and what courses are for. Also, if you need an extrinsic
motivation, you won't get credit for participation if you don't stay, and
participate, the whole time. We can often accommodate one-off exceptions – if
you have a particular day where you need to leave early, it's a good idea to be
extra-engaged in your participation so your lab leader can give you
participation credit before you leave.

**Do I have to come to lab?**

Yes, see grading above.

**I missed lab, what should I do?**

The lab page will have instructions on how to submit the make-up, which can get
you 1 (of 4 possible) points.

**I missed my exam time, what should I do?**

Stay tuned for announcements about scheduling make-ups in final exam week.

**Where is the financial aid survey?**

We do this for you; as long as you submit something in the first two weeks, we
will mark you as commencing academic activity.

**When are the midterms scheduled?**

The midterms will be flexibly scheduled during the quarter using a testing
center. More details will come; you will need to set aside some outside-of-class
time to do them, but there is not a specific class-wide time you have to put on
your calendar.

**I have a conflict with the final exam time, what can I do?**

The final exam will also be flexibly scheduled during final exam week using the
testing center.
