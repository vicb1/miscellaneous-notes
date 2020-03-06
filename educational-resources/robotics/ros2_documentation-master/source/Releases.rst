
ROS 2 Distributions
===================

What is a Distribution?
-----------------------

See `wiki.ros.org/Distributions <http://wiki.ros.org/Distributions>`_.

List of Distributions
---------------------

.. toctree::
   :hidden:
   :glob:

   Releases/*

.. raw:: html

   <style>
     .distros td {border: 0px;}
     .distros tbody tr {background-color: #c0c0c0;}
     .distros tbody tr:nth-child(1), .distros tbody tr:nth-child(2) {background-color: #33cc66;}
     .distros td {vertical-align: middle;}
   </style>

.. |crystal| image:: Releases/crystal-small.png
   :alt: Crystal logo

.. |bouncy| image:: Releases/bouncy-small.png
   :alt: Bouncy logo

.. |ardent| image:: Releases/ardent-small.png
   :alt: Ardent logo

.. list-table::
   :class: distros
   :header-rows: 1
   :widths: 35 30 20 15

   * - Distro
     - Release date
     - Logo
     - EOL date
   * - `Crystal Clemmys <Releases/Release-Crystal-Clemmys>`
     - December 14th, 2018
     - |crystal|
     - Dec 2019
   * - `Bouncy Bolson <Releases/Release-Bouncy-Bolson>`
     - July 2nd, 2018
     - |bouncy|
     - Jul 2019
   * - `Ardent Apalone <Releases/Release-Ardent-Apalone>`
     - December 8th, 2017
     - |ardent|
     - Dec 2018
   * - `beta3 <Releases/Beta3-Overview>`
     - September 13th, 2017
     -
     - Dec 2017
   * - `beta2 <Releases/Beta2-Overview>`
     - July 5th, 2017
     -
     - Sep 2017
   * - `beta1 <Releases/Beta1-Overview>`
     - December 19th, 2016
     -
     - Jul 2017
   * - `alpha1 - alpha8 <Releases/Alpha-Overview>`
     - August 31th, 2015
     -
     - Dec 2016

Distribution Details
~~~~~~~~~~~~~~~~~~~~

For details on the distributions see each releases page.
For the supported platforms and versions of common dependencies and other considerations, see the official ROS 2 Target Platforms `REP 2000 <http://www.ros.org/reps/rep-2000.html>`_.

Future Distributions
--------------------

For details on upcoming features see the `roadmap <Roadmap>`.

Currently there is a new ROS 2 distribution roughly every 6 months.
The following information are best estimates and are subject to change.

.. raw:: html

   <style>
     .future-distros td {vertical-align: middle;}
   </style>

.. list-table::
   :class: future-distros
   :header-rows: 1
   :widths: 25 30 20 25

   * - Distro
     - Release date
     - Supported for
     - Planned changes
   * - `Dashing Diademata <Releases/Release-Dashing-Diademata>`
     - May 31st, 2019
     - 2 years
     -
   * - <E-turtle>
     - November 22nd, 2019
     - 1 year
     -
   * - <F-turtle>
     - May 2020
     - 3+ years
     - Target Ubuntu 20.04

After F-turtle the expectations is to release new ROS 2 distributions once per year.
