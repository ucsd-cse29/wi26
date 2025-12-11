![doodle](./doodle.jpg)

# UCSD CSE29 WI25 Syllabus and Logistics

**This page is currently a draft; it will become official at the start of
instruction in winter quarter**

[Joe Gibbs Politz](https://jpolitz.github.io) (Instructor)

CSE 29 introduces you to the broad field of systems programming, including 1)
the basics of how programs execute on a computer, 2) programming in C with
direct access to memory and system calls, 3) software tools to manage and
interact with code and programs. All very cool stuff that makes every programmer
better!


### Lecture

Most lectures will come with a _review check_ taken on paper at some point,
usually right at the beginning of class. These serve mainly as a way to check
in on content from previous lectures before starting the content for the day,
and for us to get some information about how everyone is following along with
lecture content.

A review check will be scanned, uploaded to Gradescope by the staff, and graded
on a 0-3 scale:

- 1 for writing something
- 2 for some plausible answer
- 3 for correct answers

We say “most” because in some lectures we may skip this for various timing or
logistics reasons.


### Labs

The course's lab component meets for 2 hours. In each lab you'll switch between
working on your own, working in pairs, and participating in group discussions
about your approach, lessons learned, programming problems, and so on.

The lab sessions and groups will be led by TAs and tutors, who will note your
participation in these discussions for credit. Note that you must
**participate**, not merely **attend**, for credit.

For each lab there are 4 possible points to earn:

- **1** for being present
- **2** for being an active, professional, productive participant while present
- **1** for submitting and/or getting work checked off that was done in lab

If you miss lab, you can earn the submission/check-off point by submitting work
late, but cannot earn back the 3 points related to participation.  There is no
way to make up a lab beyond this 1 point, even for illness, travel, or
emergencies. Our preference would be to require all 10 labs for an A, and have
some kind of excused absences. However, tracking excused absences doesn't
really scale, so the “two for any reason” policy is how we handle it.  You
don't need to justify your missed labs. Contact the instructor if you'll miss
more than 2 labs for unavoidable reasons.


## Policies and Perspective

### CSE29, Large Language Models, and You

Evidence suggests that experts can generate (some kinds of) programs more
quickly with the assistance of large language models. But, they did not
_become_ experts by using them. They did that with trial and error, attempting
to do what the machine can (now) do by hand, and by understanding programming
in great detail.

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

### Device Policy

To a large degree, you are responsible for managing your time, attention, and
learning in lecture, and I hesitate to make policies that attempt to govern or
restrict your choices with respect to note taking or device use. However,
lecture is a communal space, and your actions can affect others' learning. In
particular, what you have on your screen _may be unavoidably in the field of
view of other students_. Because of this, you are responsible for a fragment of
the attention of everyone in a cone of space behind you.  With this in mind,
the policy for lecture is that _if you use a device, you must have
lecture-related content onscreen_. There is even [research that
shows](https://www.sciencedirect.com/science/article/pii/S0360131520301007)
that the content of screens in the classroom, even quite far away, can have a
detrimental affect on learning. If you cannot resist checking social media,
playing a game, or doing other off-topic tasks during lecture, sit in the back
2 rows so that you are only having an affect on your own attention, or the
attention of others with a similar mindset.

### Exams and Academic Integrity

It is a violation of academic integrity to share details of _your_ exam with
others until after you receive your grade for it. Keep in mind that the exams
are randomized to discourage casual cheating, so your exam may not be the same
one that others see.  It is a violation of academic integrity to communicate
with anyone other than the official proctors during the exam, or to use devices
other than the ones you are using to complete the exam.


### Lab and Professionalism

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

## FAQ/AFQ (Anticipated Frequent Questions)

**Q: Is there a syllabus listing the topics covered in this course that I can
show my department/school/institution?**

Yes, the content will be similar to the Fall 2024 version:
[https://ucsd-cse29.github.io/fa24/](https://ucsd-cse29.github.io/fa24/), and
that page has the relevant course outcome and syllabus information.

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

We do this for you; as long as you submit something or do a lab participation
in the first two weeks, we will mark you as commencing academic activity.

**When are the midterms scheduled?**

The midterms will be flexibly scheduled during the quarter using a testing
center. More details will come; you will need to set aside some outside-of-class
time to do them, but there is not a specific class-wide time you have to put on
your calendar.

**I have a conflict with the final exam time, what can I do?**

The final exam will also be flexibly scheduled during final exam week using the
testing center.

