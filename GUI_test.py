from tkinter import *
import time


def gokker():
    while True:
        # --------kleurkolommen--------

        kleur1 = Label(master=gokkerframe,
                       text="kleur 1",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=10,
                       height=3)
        kleur1.grid(row=1, column=1)
        kleur2 = Label(master=gokkerframe,
                       text="kleur 2",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=10,
                       height=3)
        kleur2.grid(row=1, column=2)
        kleur3 = Label(master=gokkerframe,
                       text="kleur 3",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=10,
                       height=3)
        kleur3.grid(row=1, column=3)
        kleur4 = Label(master=gokkerframe,
                       text="kleur 4",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=10,
                       height=3)
        kleur4.grid(row=1, column=4)

        # ---------rondenummer----------

        ronde1 = Label(master=gokkerframe,
                       text="ronde 1",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde1.grid(row=2, column=0)

        ronde2 = Label(master=gokkerframe,
                       text="ronde 2",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde2.grid(row=3, column=0)

        ronde3 = Label(master=gokkerframe,
                       text="ronde 3",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde3.grid(row=4, column=0)

        ronde4 = Label(master=gokkerframe,
                       text="ronde 4",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde4.grid(row=5, column=0)

        ronde5 = Label(master=gokkerframe,
                       text="ronde 5",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde5.grid(row=6, column=0)

        ronde6 = Label(master=gokkerframe,
                       text="ronde 6",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde6.grid(row=7, column=0)

        ronde7 = Label(master=gokkerframe,
                       text="ronde 7",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde7.grid(row=8, column=0)

        ronde8 = Label(master=gokkerframe,
                       text="ronde 8",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde8.grid(row=9, column=0)

        ronde9 = Label(master=gokkerframe,
                       text="ronde 9",
                       background='#ffffff',
                       foreground='#001066',
                       font=('Arial', 7, 'bold'),
                       width=17,
                       height=3)
        ronde9.grid(row=10, column=0)

        ronde10 = Label(master=gokkerframe,
                        text="ronde 10",
                        background='#ffffff',
                        foreground='#001066',
                        font=('Arial', 7, 'bold'),
                        width=17,
                        height=3)
        ronde10.grid(row=11, column=0)

        # ------------------terugknop------------------------
        terug = Button(master=gokkerframe,
                       text='terug naar hoofdmenu',
                       font=('arial', 7, 'bold'),
                       command=toonhoofdframe,
                       background='white',
                       foreground='black',
                       width=17,
                       height=3)
        terug.grid(row=20, column=0)

        kleur(), checks()
        time.sleep(1)
        root.update()


def kleur():
    """vult de kleurenfeedback weer"""
    def soep(ronde, kleurnr):
        """geeft de goede kleur terug"""
        try:
            f = open("kleur", "r")
            a = f.readlines()[ronde]
            b = a[kleurnr]
            f.close()

            if b == "0":
                colour = "blue"
            elif b == "1":
                colour = "green"
            elif b == "2":
                colour = "red"
            elif b == "3":
                colour = "yellow"
            elif b == "4":
                colour = "white"
            elif b == "5":
                colour = "purple"
            else:
                colour = "grey"
        except:
            colour = "grey"

        return colour

    # ----------------ronde 1-----------------------
    ronde1kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(0, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde1kolom1.grid(row=2, column=1)

    ronde1kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(0, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde1kolom2.grid(row=2, column=2)

    ronde1kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(0, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde1kolom3.grid(row=2, column=3)

    ronde1kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(0, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde1kolom4.grid(row=2, column=4)

    # --------------ronde 2----------------
    ronde2kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(1, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde2kolom1.grid(row=3, column=1)

    ronde2kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(1, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde2kolom2.grid(row=3, column=2)

    ronde2kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(1, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde2kolom3.grid(row=3, column=3)

    ronde2kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(1, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde2kolom4.grid(row=3, column=4)

    # ----------ronde 3----------------
    ronde3kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(2, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde3kolom1.grid(row=4, column=1)

    ronde3kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(2, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde3kolom2.grid(row=4, column=2)

    ronde3kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(2, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde3kolom3.grid(row=4, column=3)

    ronde3kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(2, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde3kolom4.grid(row=4, column=4)

    # -----------ronde4 ---------------
    ronde4kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(3, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde4kolom1.grid(row=5, column=1)

    ronde3kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(3, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde3kolom2.grid(row=5, column=2)

    ronde4kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(3, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde4kolom3.grid(row=5, column=3)

    ronde4kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(3, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde4kolom4.grid(row=5, column=4)

    # ------------------ronde 5---------------
    ronde5kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(4, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde5kolom1.grid(row=6, column=1)

    ronde5kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(4, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde5kolom2.grid(row=6, column=2)

    ronde5kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(4, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde5kolom3.grid(row=6, column=3)

    ronde5kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(4, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde5kolom4.grid(row=6, column=4)

    # -----------ronde 6-------------
    ronde6kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(5, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde6kolom1.grid(row=7, column=1)

    ronde6kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(5, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde6kolom2.grid(row=7, column=2)

    ronde6kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(5, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde6kolom3.grid(row=7, column=3)

    ronde6kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(5, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde6kolom4.grid(row=7, column=4)

    # -----------ronde 7-----------------
    ronde7kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(6, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde7kolom1.grid(row=8, column=1)

    ronde7kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(6, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde7kolom2.grid(row=8, column=2)

    ronde7kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(6, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde7kolom3.grid(row=8, column=3)

    ronde7kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(6, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde7kolom4.grid(row=8, column=4)

    # ---------ronde 8-----------------
    ronde8kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(7, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde8kolom1.grid(row=9, column=1)

    ronde8kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(7, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde8kolom2.grid(row=9, column=2)

    ronde8kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(7, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde8kolom3.grid(row=9, column=3)

    ronde8kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(7, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde8kolom4.grid(row=9, column=4)

    # ---------------ronde 9-------------------
    ronde9kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(8, 0),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde9kolom1.grid(row=10, column=1)

    ronde9kolom2 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(8, 1),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde9kolom2.grid(row=10, column=2)

    ronde9kolom3 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(8, 2),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde9kolom3.grid(row=10, column=3)

    ronde9kolom4 = Label(master=gokkerframe,
                         text=" ",
                         background=soep(8, 3),  # hier kleur van knopdruk
                         foreground="white",
                         font=('Arial', 7, 'bold'),
                         width=10,
                         height=3)
    ronde9kolom4.grid(row=10, column=4)

    # ------------ronde 10------------

    ronde10kolom1 = Label(master=gokkerframe,
                          text=" ",
                          background=soep(9, 0),  # hier kleur van knopdruk
                          foreground="white",
                          font=('Arial', 7, 'bold'),
                          width=10,
                          height=3)
    ronde10kolom1.grid(row=11, column=1)

    ronde10kolom2 = Label(master=gokkerframe,
                          text=" ",
                          background=soep(9, 1),  # hier kleur van knopdruk
                          foreground="white",
                          font=('Arial', 7, 'bold'),
                          width=10,
                          height=3)
    ronde10kolom2.grid(row=11, column=2)

    ronde10kolom3 = Label(master=gokkerframe,
                          text=" ",
                          background=soep(9, 2),  # hier kleur van knopdruk
                          foreground="white",
                          font=('Arial', 7, 'bold'),
                          width=10,
                          height=3)
    ronde10kolom3.grid(row=11, column=3)

    ronde10kolom4 = Label(master=gokkerframe,
                          text=" ",
                          background=soep(9, 3),  # hier kleur van knopdruk
                          foreground="white",
                          font=('Arial', 7, 'bold'),
                          width=10,
                          height=3)
    ronde10kolom4.grid(row=11, column=4)


def checks():
    """de zwarte en witte feedback"""
    def reader(ronde, kleursoort):
        try:
            f = open("zwartwit", "r")
            a = f.readlines()[ronde]
            b = a[kleursoort]
            f.close()
            return b
        except:
            b = 0
            return b

        # ------------resultaat wit-----------

    resultaat_ronde1 = Label(master=gokkerframe,
                             text=reader(0, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde1.grid(row=2, column=5)

    resultaat_ronde2 = Label(master=gokkerframe,
                             text=reader(1, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde2.grid(row=3, column=5)

    resultaat_ronde3 = Label(master=gokkerframe,
                             text=reader(2, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde3.grid(row=4, column=5)

    resultaat_ronde4 = Label(master=gokkerframe,
                             text=reader(3, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde4.grid(row=5, column=5)

    resultaat_ronde5 = Label(master=gokkerframe,
                             text=reader(4, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde5.grid(row=6, column=5)

    resultaat_ronde6 = Label(master=gokkerframe,
                             text=reader(5, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde6.grid(row=7, column=5)

    resultaat_ronde7 = Label(master=gokkerframe,
                             text=reader(6, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde7.grid(row=8, column=5)

    resultaat_ronde8 = Label(master=gokkerframe,
                             text=reader(7, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde8.grid(row=9, column=5)

    resultaat_ronde9 = Label(master=gokkerframe,
                             text=reader(8, 0),
                             background='white',
                             foreground='#001066',
                             font=('Arial', 7, 'bold'),
                             width=10,
                             height=3)
    resultaat_ronde9.grid(row=10, column=5)

    resultaat_ronde10 = Label(master=gokkerframe,
                              text=reader(9, 0),
                              background='white',
                              foreground='#001066',
                              font=('Arial', 7, 'bold'),
                              width=10,
                              height=3)
    resultaat_ronde10.grid(row=11, column=5)

    # --------------resultaat zwart-----------------
    resultaat_ronde1_zwart = Label(master=gokkerframe,
                                   text=reader(0, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde1_zwart.grid(row=2, column=6)

    resultaat_ronde2_zwart = Label(master=gokkerframe,
                                   text=reader(1, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde2_zwart.grid(row=3, column=6)

    resultaat_ronde3_zwart = Label(master=gokkerframe,
                                   text=reader(2, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde3_zwart.grid(row=4, column=6)

    resultaat_ronde4_zwart = Label(master=gokkerframe,
                                   text=reader(3, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde4_zwart.grid(row=5, column=6)

    resultaat_ronde5_zwart = Label(master=gokkerframe,
                                   text=reader(4, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde5_zwart.grid(row=6, column=6)

    resultaat_ronde6_zwart = Label(master=gokkerframe,
                                   text=reader(5, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde6_zwart.grid(row=7, column=6)

    resultaat_ronde7_zwart = Label(master=gokkerframe,
                                   text=reader(6, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde7_zwart.grid(row=8, column=6)

    resultaat_ronde8_zwart = Label(master=gokkerframe,
                                   text=reader(7, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde8_zwart.grid(row=9, column=6)

    resultaat_ronde9_zwart = Label(master=gokkerframe,
                                   text=reader(8, 1),
                                   background='black',
                                   foreground='white',
                                   font=('Arial', 7, 'bold'),
                                   width=10,
                                   height=3)
    resultaat_ronde9_zwart.grid(row=10, column=6)

    resultaat_ronde10_zwart = Label(master=gokkerframe,
                                    text=reader(9, 1),
                                    background='black',
                                    foreground='white',
                                    font=('Arial', 7, 'bold'),
                                    width=10,
                                    height=3)
    resultaat_ronde10_zwart.grid(row=11, column=6)


def codemaker():
    """maakt codemakerframe"""
    while True:
        f = open("mastercode", "r")
        d = f.read()
        length = len(d)
        f.close()



        if length != 4:
            zoep = "geef nu je code op"

        else:
            zoep = "je code kan nu gekraakt worden"
        status_mastercode = Label(master=codemakerframe,
                      text=zoep,
                      background="grey",
                      foreground="black",
                      font=('arial', 8, "bold"),
                      width=25)
        status_mastercode.grid(row=1, column=1)
        time.sleep(1)
        root.update()

        terugknop = Button(master=codemakerframe,
                           text='terug naar hoofdmenu',
                           font=('arial', 7, 'bold'),
                           command=toonhoofdframe,
                           background='white',
                           foreground='black',
                           width=17,
                           height=3)
        terugknop.grid(row=10, column=0)


def toongokkerframe():
    """opent gokkerframe, en sluit hoofdframe"""
    hoofdframe.grid_forget()
    gokkerframe.grid(row=0, column=0)
    gokker()


def tooncodemakerframe():
    """opent codemakerframe, en sluit hoofdframe"""
    hoofdframe.grid_forget()
    codemakerframe.grid()
    codemaker()


def toonhoofdframe():
    """opent hoofdframe, en sluit andere frames"""
    gokkerframe.grid_forget()
    codemakerframe.grid_forget()
    hoofdframe.grid(row=0, column=0)


root = Tk()
root.configure(background="grey")
root.geometry("{0}x{1}+0+0".format(root.winfo_screenwidth(), root.winfo_screenheight()))
root.title('Mastermind')
root.bind("<Escape>", lambda e: e.widget.quit())
# hier word de root omschreven


gokkerframe = Frame(master=root, background="grey")
gokkerframe.grid(row=0, column=0)
# hier wordt de gokkerframe gemaakt

codemakerframe = Frame(master=root, background="grey")
codemakerframe.grid(row=0, column=0)
# hier wordt de codemakerframe gemaakt

hoofdframe = Frame(master=root, background="grey")
hoofdframe.grid(row=0, column=0)
# hier wordt het hoofdframe gemaakt


gokkerbutton = Button(master=hoofdframe,
                      text='Ik ben gokker',
                      font=('arial', 10),
                      command=toongokkerframe,
                      background="white",
                      foreground="black",
                      width=15,
                      height=3)
gokkerbutton.grid(row=0, column=0)

codemakerbutton = Button(master=hoofdframe,
                         text='Ik ben codemaker',
                         font=('arial', 10),
                         command=tooncodemakerframe,
                         background="white",
                         foreground="black",
                         width=15,
                         height=3)
codemakerbutton.grid(row=2, column=0)

root.bind("<Escape>", lambda e: e.widget.quit())

toonhoofdframe()
root.mainloop()
