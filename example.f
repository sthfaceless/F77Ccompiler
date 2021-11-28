      Program inpdat
c
c This program reads n points from a data file and stores them in
c 3 arrays x, y, z.
c
      integer nmax
      parameter (nmax=1000)
      real x(nmax), y(nmax), z(nmax)
c Open the data file
      open (unit=20, file='points.dat')
c Read the number of points
      read(20,*) n
      if (n.GT.nmax) then
        write(*,*) 'Error: n = ', n, 'is larger than nmax =', nmax
        goto 9999
      endif
c Loop over the data points
      do i= 1, n
        read(20,100) x(i), y(i), z(i)
      enddo
100   format (3(F10.4))
c Close the file
      close (20)
c Now we can process the data somehow...
9999  stop
      end