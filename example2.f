c Begin commentary

        real function hypo(x, y)
        integer x, y
        hypo = (x * x + y * y) ** (1/2)
        end

        program abc
        integer a, b, c

        print *, "This program calculates a ** b + c, type a, b, c:"
        read(*, *) a, b, c
        print *, a ** b + c

        if (a.ge.1) then
            write (*,*) "Ha ""a"" is greater than 1, it's", a
     +, "you are crazy"
        elseif (b.le.1) then
            write (*,*) "Hmm, ""b"" is so small...
     + Let's make it greater by 3", b+3
        else
            write (*,*) "There is nothing to say but we can
     + calculate hypo for b and c", hypo(b, c)
        endif

        do i = 0, 3*(c-1), 3
            write(*, *) "Print this message exactly c times", i
        enddo

        end

c Some end commentary