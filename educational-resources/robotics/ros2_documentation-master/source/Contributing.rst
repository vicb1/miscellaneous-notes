
Contributing to ROS 2
=====================

.. contents:: Table of Contents
   :depth: 1
   :local:

A few things to remember before you start contributing to the ROS 2 project.

Tenets
------

* Respect what came before

  ROS has been around for more than a decade and is used by developers and across the world.
  Keep a humble attitude and an open mindset while contributing.

* Embed OSRF as early as possible

  * OSRF acts as a gate-keeper and advocate for the ROS community.
    Rely on their expertise and technical judgement from the design phase.
  * Start discussions with OSRF and the community early.
    Long time ROS contributors may have a clearer vision of the bigger picture.
    If you implement a feature and send a pull request without discussing with the community first, you are taking the risk of it being rejected, or you may be asked to largely rethink your design.
  * Opening issues or using Discourse to socialize an idea before starting the implementation is generally preferable.

* Adopt community best-practices whenever possible instead of ad-hoc processes

  Think about your end-user's experience when developing and contributing.
  Avoid using non-standard tools or libraries that may not be accessible to everyone.

* Think about the community as a whole

  Think about the bigger picture.
  There are developers building different robots with different constraints.
  ROS needs to accommodate requirements of the whole community.

There are a number of ways you can contribute to the ROS 2 project.

Design discussions
------------------

Discussions about the design of ROS 2 are ongoing on the `ROS 2 forum <http://discourse.ros.org/c/ng-ros>`__.
Participating in these discussions is an important way to have a say on how different features of ROS 2 will work and will be implemented.

The diverse community behind the ROS ecosystem is one of its greatest assets.
We encourage all members of the ROS community to participate in these design discussions so that we can 1) leverage the experience of community members, and 2) keep the varied use cases of ROS in mind.

Support
-------

One of the easiest ways that you can contribute to ROS 2 is by helping other community members troubleshoot their system.
ROS 2 users come from a range of technical backgrounds, use a variety of different operating systems/platforms, and don’t necessarily have any prior experience with ROS (1 or 2).

If you see an issue on `ROS Answers <http://answers.ros.org/questions/tags:ros2/>`__ that is similar to something you’ve run into yourself, please consider providing some pointers to what helped in your situation.
+Don’t worry if you are not sure if your response is correct - simply say so, and other community members will jump in if necessary.

Contributing code
-----------------

Setting up your development environment
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

To get started, you'll want to install from source; follow `the source installation instructions <building-from-source>` for your platform.

Development Guides
^^^^^^^^^^^^^^^^^^

.. toctree::
   :titlesonly:
   :maxdepth: 1

   Contributing/ROS-2-On-boarding-Guide
   Contributing/Developer-Guide
   Contributing/Design-Guide
   Contributing/Quality-Guide
   Contributing/MISRA-Compliance-Guide
   Contributing/Build-Cop-and-Build-Farmer-Guide
   Contributing/Migration-Guide
   Contributing/Examples-and-Tools-for-ROS1----ROS2-Migrations
   Contributing/Inter-Sphinx-Support

What to work on
^^^^^^^^^^^^^^^

We have identified a number of tasks that could be worked on by community members: they can be listed by `searching across the ROS 2 repositories for issues labeled as "help wanted" <https://github.com/search?q=user%3Aament+user%3Aros2+is%3Aopen+label%3A"help+wanted"&type=Issues>`__ or filtering the items on `the ROS 2 waffle.io board <https://waffle.io/ros2/ros2?label=help%20wanted>`__.
If you see something on that list that you would like to work on, please comment on the item to let others know that you are looking into it.

We also have a label for issues that we think should be more accessible for first-time contributors, `labelled “good first issue” <https://waffle.io/ros2/ros2?label=good%20first%20issue>`__.
If you are interested in contributing to the ROS 2 project, we encourage you to take a look at those issues first.
If you’d like to cast a wider net, we welcome contributions on any open issue (or others that you might propose), particularly tasks that have a milestone signifying they’re targeted for the next ROS 2 release (the milestone will be the next release's codename e.g. 'crystal').

If you have some code to contribute that fixes a bug or improves documentation, please submit it as a pull request to the relevant repository.
For larger changes, it is a good idea to discuss the proposal `on the ROS 2 forum <http://discourse.ros.org/c/ng-ros>`__ before you start to work on it so that you can identify if someone else is already working on something similar.
If your proposal involves changes to the APIs, it is especially recommended that you discuss the approach before starting work.

Submitting your code changes
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Code contributions should be made via pull requests to `the appropriate ros2 repositories <https://github.com/ros2>`__.

We ask all contributors to follow the practices explained in `the developer guide <Contributing/Developer-Guide>`.

Please be sure to `run tests <colcon-run-the-tests>` for your code changes because most packages have tests that check that the code complies with our style guidelines.
