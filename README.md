#### Description
This programm was made with Dev C++. It displays by executing the logistic map using OpenGL.

#### The logistic map
The logistic map is a mathematical function that describes the population growth of a species in an environment with limited resources. It's one of the simplest nonlinear dynamical systems studied in chaos theory.

The logistic map is defined by the recursive equation:

<img height="35px" src="/images/screenshot(4).png"/>

Here, <img height="20px" src="/images/screenshot(1).png"/>  represents the population at time **n**, and **r** is a parameter representing the growth rate of the population. The population <img height="25px" src="/images/screenshot(2).png"/> at the next time step is determined by multiplying the current population <img height="20px" src="/images/screenshot(1).png"/> by the factor <img height="20px" src="/images/screenshot(3).png"/>.

The logistic map exhibits a wide range of behaviors depending on the value of the growth parameter **r**:

1. **Stable Population:** For small values of **r**, the population tends to stabilize at a fixed point. This represents a stable equilibrium where the population neither grows nor declines.

2. **Periodic Behavior:** As the value of **r** increases, the logistic map can exhibit periodic oscillations, where the population fluctuates between a set of multiple values in a repeating pattern. These oscillations can be regular or irregular depending on the specific value of **r**.

3. **Chaotic Behavior:** At higher values of **r**, the logistic map can enter chaotic regimes where the population undergoes complex, unpredictable behavior. Chaotic behavior in the logistic map is characterized by sensitive dependence on initial conditions, where tiny differences in initial population values can lead to vastly different outcomes over time.

The logistic map is widely studied not only for its mathematical properties but also for its applications in various fields, including biology, economics, and physics. It provides insights into the dynamics of nonlinear systems and the emergence of complexity from simple rules. Additionally, it serves as a fundamental example of deterministic chaos, where deterministic systems exhibit random-like behavior without external random inputs.

<img height="350px" src="https://th.bing.com/th/id/R.581afb70002f1db50909a25507a61528?rik=BxjFJ9xDwHhKsQ&riu=http%3a%2f%2fwww.kierandkelly.com%2fwp-content%2fuploads%2f2015%2f04%2fX-Next-5.jpg&ehk=A%2fhmvXKWoOwidrAMbOIg1D4hReLd41HZipIe4HstUVo%3d&risl=&pid=ImgRaw&r=0"/>

https://blbadger.github.io/logistic-map.html

#### How to install
In order to execute this programm you need a C Compiler with OpenGL implemented.
