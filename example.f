      real function icount(ifirst, isecond)
      real ifirst, isecond
      x = 12 + "asds"
      ifirst = ifirst + isecond
      icount = ifirst ** isecond ** ifirst ** isecond
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
                    if (2.le.item) then
                        call icount(level, item)
                    endif
              else
                    do j = 1, level, 22
                        print *, 23
                    enddo
              endif
            print *, "end"
            pause 10
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
      complex r = (10, 131), w = (1e3, 30d6), a
      a = (r * w + (x, y) - (34, 31)) * (31, 31)
      nmax = 1000

      read *, y
      read (*) x, y
      read *, x, y
      read (*, *) x, y

c Open the data file
      open (20, file='points.dat')
c Read the number of points
      read(20,*) n
      IF (n.GT.nmax) then
        write(*,*) 'Error: n = ', n, 'is larger than nmax =', getLevel(nmax)
      endif
      do i= 1, n, (5*n + icount(48, 37 -n))
        read(20,*) x, y, z
        do while (1.le.2)
            print *, "123" + 11
        enddo
      enddo
9000  print *, "info"
      goto 9000
c Close the file
      close (20)
c Now we can process the data somehow...
      end

c Info r
