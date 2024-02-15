# Logistic-Map
## Description
This programm was made with C.  
It displays the logistic map using OpenGL.

## Displaying logistic map
The logistic map is a mathematical function that describes the population growth of a species in an environment with limited resources. It's one of the simplest nonlinear dynamical systems studied in chaos theory.

The logistic map is defined by the recursive equation:

<img height="35px" src="/images/screenshot(4).png"/>

Here, H~2~0  represents the population at time **n**, and **r** is a parameter representing the growth rate of the population. The population <img height="25px" src="/images/screenshot(2).png"/> at the next time step is determined by multiplying the current population <img height="20px" src="/images/screenshot(1).png"/> by the factor <img height="20px" src="/images/screenshot(3).png"/>.

The logistic map exhibits a wide range of behaviors depending on the value of the growth parameter **r**:

1. **Stable Population:** For small values of **r**, the population tends to stabilize at a fixed point. This represents a stable equilibrium where the population neither grows nor declines.

2. **Periodic Behavior:** As the value of **r** increases, the logistic map can exhibit periodic oscillations, where the population fluctuates between a set of multiple values in a repeating pattern. These oscillations can be regular or irregular depending on the specific value of **r**.

3. **Chaotic Behavior:** At higher values of **r**, the logistic map can enter chaotic regimes where the population undergoes complex, unpredictable behavior. Chaotic behavior in the logistic map is characterized by sensitive dependence on initial conditions, where tiny differences in initial population values can lead to vastly different outcomes over time.

The logistic map is widely studied not only for its mathematical properties but also for its applications in various fields, including biology, economics, and physics. It provides insights into the dynamics of nonlinear systems and the emergence of complexity from simple rules. Additionally, it serves as a fundamental example of deterministic chaos, where deterministic systems exhibit random-like behavior without external random inputs.

<img height="350px" src="https://th.bing.com/th/id/R.581afb70002f1db50909a25507a61528?rik=BxjFJ9xDwHhKsQ&riu=http%3a%2f%2fwww.kierandkelly.com%2fwp-content%2fuploads%2f2015%2f04%2fX-Next-5.jpg&ehk=A%2fhmvXKWoOwidrAMbOIg1D4hReLd41HZipIe4HstUVo%3d&risl=&pid=ImgRaw&r=0"/>

(Visualization of the logistic-map) https://blbadger.github.io/logistic-map.html

## How to set up

All of the code to display this works in a single class. You can use any C compiler.
I used DevC++ 5.4.1 which is free for everyone. Download and extract glutming which contains GL.

You need 3 files out of the glutming folder:
* glut.h,
* libglut32.a,
* glut32.dll.

If you use DevC++, you need to place the glut.h file in Dev-Cpp\MinGW32\include\GL.
Put the libglut32.a into Dev-Cpp\MinGW\lib and the glut32.dll into C:\Windows\SysWoW64.

<img height="200px" src="/images/screenshot(9).png"/><img height="200px" src="/images/screenshot(11).png"/>

To copy those files into the specified folders, you need to provide administrator permission.
After that, you can open DevC++. 
Open a new Source file. 

<img height="200px" src="/images/screenshot(10).png"/>

To run and test it, you need to add this code (you can also copy the source code of the logistic-map):
```
#include <GL/glut.h>

void display()
{
	
}

int main()
{ 
	glutInitWindowSize(640,640);
	glutCreateWindow("Random Name");
	glutDisplayFunc(display);
	gluOrtho2D(0,640,0,640);
	glutMainLoop();
	return 0;
}
```

It won't work just yet. To run it, you lastly need to open the Compiler Options under Tools and tick "Add the following commands when calling the compiler".  
Paste in these linkers and click OK.
```
-lglu32 -lglut32 -lopengl32
```

<img height="200px" src="/images/screenshot(12).png"/>

Press F11 to compile and run the code and see if it works. It should open a blank window.  
If so, you are finished with the setup.
