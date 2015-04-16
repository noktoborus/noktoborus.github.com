#include <stdio.h>
#include <EGL/egl.h>

int
main (int argc, char **argv)
{
	EGLint major;
	EGLint minor;
	EGLDisplay dpy;
	dpy = eglGetDisplay (EGL_DEFAULT_DISPLAY);
	if (dpy == EGL_NO_DISPLAY)
	{
		printf ("EGL: no displays present\n");
		return 1;
	}
	if (eglInitialize (dpy, &major, &minor) == EGL_FALSE)
	{
		printf ("EGL: initialize failed\n");
		return 1;
	}
	printf ("EGL Init version: %d.%d\n", major, minor);
	printf ("EGL Version: %s\n", eglQueryString (dpy, EGL_VERSION));
	return 0;
}

