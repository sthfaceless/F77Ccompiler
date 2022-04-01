c Begin commentary

        real function hypo(x, y)
        real x, y
        hypo = (x * x + y * y) ** (1.0/2.0)
        end

        program abc
        integer a
        real b, c
        print *, "This program calculates a ** b + c, type a, b, c:"
        read(*, *) a, b, c
        print *, a ** b + c

        if (a.ge.1) then
            write (*,*) """a"" greater than 1, it's", a, "you are crazy"
        elseif (b.le.1) then
            write (*,*) "Let's make ""b"" greater by 3", b+3
        else
            write (*,*) "Calculate hypo for ""b"" and ""c""", hypo(b, c)
        endif

        do i = 0, 3*(c-1), 3
            write(*, *) "Print this message exactly c times", i
        enddo

        end

c Some end commentary