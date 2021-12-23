      real function icount(ifirst, isecond)
      real ifirst, isecond
      ifirst = ifirst + isecond
      icount = ifirst ** isecond
      end

      subroutine getLevel(level)
      do item = 1, level, level*2
        if (item.LE.level) then
            write (*, *) item, item*2, item + " asd"
        else
              if (level.GE.level) then
                    getLevel = 25 + "111"
              elseif (level.GE.level) then
                    getLevel = 26 ** 31
              else
                    do j = 1, level, 22
                        print *, 23
                    enddo
              endif
            print *, "end"
        endif
      enddo
      end

c
c This program reads n points from a data file and stores them in
c 3 arrays x, y, z.
c
      Program name
      integer nmax, n
      real x, y, z
      nmax = 1000
c Open the data file
      open (20, file='points.dat')
c Read the number of points
      read(20,*) n
      IF (n.GT.nmax) then
        write(*,*) 'Error: n = ', n, 'is larger than nmax =', nmax
      endif
      do i= 1, n, (5*n + 48)
        read(20,*) x, y, z
      enddo
c Close the file
      close (20)
c Now we can process the data somehow...
      end

c Info r
