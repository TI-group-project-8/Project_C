from tkinter import *



def gokker():

#--------kleurkolommen--------

    kleur1 = Label(master=gokkerframe,
                      text="kleur 1",
                      background='#ffffff',
                      foreground='#001066',
                      font=('NS Sans', 12, 'bold'),
                      width=24,
                      height=3)
    kleur1.grid(row=1, column=1)
    kleur2 = Label(master=gokkerframe,
                       text="kleur 2",
                       background='#ffffff',
                       foreground='#001066',
                       font=('NS Sans', 12, 'bold'),
                       width=5,
                       height=3)
    kleur2.grid(row=1, column=2)
    kleur3 = Label(master=gokkerframe,
                       text="kleur 3",
                       background='#ffffff',
                       foreground='#001066',
                       font=('NS Sans', 12, 'bold'),
                       width=20,
                       height=3)
    kleur3.grid(row=1, column=3)
    kleur4 = Label(master=gokkerframe,
                       text="kleur 4",
                       background='#ffffff',
                       foreground='#001066',
                       font=('NS Sans', 12, 'bold'),
                       width=9,
                       height=3)
    kleur4.grid(row=1, column=4)


#---------rondenummer----------

    ronde1 = Label(master=gokkerframe,
                      text="ronde 1",
                      background='#ffffff',
                      foreground='#001066',
                      font=('NS Sans', 12, 'bold'),
                      width=24,
                      height=3)
    ronde1.grid(row=2, column=0)

    ronde2 = Label(master=gokkerframe,
                   text="ronde 2",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde2.grid(row=3, column=0)

    ronde3 = Label(master=gokkerframe,
                   text="ronde 3",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde3.grid(row=4, column=0)

    ronde4 = Label(master=gokkerframe,
                   text="ronde 4",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde4.grid(row=5, column=0)

    ronde5 = Label(master=gokkerframe,
                   text="ronde 5",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde5.grid(row=6, column=0)

    ronde6 = Label(master=gokkerframe,
                   text="ronde 6",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde6.grid(row=7, column=0)

    ronde7 = Label(master=gokkerframe,
                   text="ronde 7",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde7.grid(row=8, column=0)

    ronde8 = Label(master=gokkerframe,
                   text="ronde 8",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde8.grid(row=9, column=0)

    ronde9 = Label(master=gokkerframe,
                   text="ronde 9",
                   background='#ffffff',
                   foreground='#001066',
                   font=('NS Sans', 12, 'bold'),
                   width=24,
                   height=3)
    ronde9.grid(row=10, column=0)


#------------resultaat wit-----------

    resultaat_ronde1 = Label(master=gokkerframe,
                             text="x",
                             background= 'white',
                             foreground= '#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde1.grid(row= 2, column= 5)

    resultaat_ronde2 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde2.grid(row=3, column=5)

    resultaat_ronde3 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde3.grid(row=4, column=5)

    resultaat_ronde4 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde4.grid(row=5, column=5)

    resultaat_ronde5 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde5.grid(row=6, column=5)

    resultaat_ronde6 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde6.grid(row=7, column=5)

    resultaat_ronde7 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde7.grid(row=8, column=5)

    resultaat_ronde8 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde8.grid(row=9, column=5)

    resultaat_ronde9 = Label(master=gokkerframe,
                             text="x",
                             background='white',
                             foreground='#001066',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde9.grid(row=10, column=5)


#--------------resultaat zwart-----------------
    resultaat_ronde1_zwart = Label(master=gokkerframe,
                             text="x",
                             background='black',
                             foreground='white',
                             font=('NS Sans', 12, 'bold'),
                             width=20,
                             height=3)
    resultaat_ronde1_zwart.grid(row=2, column=6)

    resultaat_ronde2_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde2_zwart.grid(row=3, column=6)

    resultaat_ronde3_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde3_zwart.grid(row=4, column=6)

    resultaat_ronde4_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde4_zwart.grid(row=5, column=6)

    resultaat_ronde5_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde5_zwart.grid(row=6, column=6)

    resultaat_ronde6_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde6_zwart.grid(row=7, column=6)

    resultaat_ronde7_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde7_zwart.grid(row=8, column=6)

    resultaat_ronde8_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde8_zwart.grid(row=9, column=6)

    resultaat_ronde9_zwart = Label(master=gokkerframe,
                                   text="x",
                                   background='black',
                                   foreground='white',
                                   font=('NS Sans', 12, 'bold'),
                                   width=20,
                                   height=3)
    resultaat_ronde9_zwart.grid(row=10, column=6)

#------------------terugknop------------------------
    terug = Button(master=gokkerframe,
                    text='terug naar hoofdmenu',
                    font=('arial', 12, 'bold'),
                    command=toonhoofdframe,
                    background='white',
                    foreground='black',
                    width=24,
                    height=3)
    terug.grid(row=90, column=90)

    kleur()


    root.bind("<Escape>", lambda e: e.widget.quit())

    master = gokkerframe

def kleur():
    ronde1kolom1 = Label(master=gokkerframe,
                         text=" ",
                         background="orange",#hier kleur van knopdruk
                         foreground="orange",
                         font=('NS Sans', 12, 'bold'),
                         width= 20,
                         height=3)
    ronde1kolom1.grid(row=2, column=1)




def codemaker():
    Mainlabel = Label(master=codemakerframe,
                      text="kleur 1",
                      background='#ffffff',
                      foreground='#001066',
                      font=('NS Sans', 12, 'bold'),
                      width=24,
                      height=3)
    Mainlabel.grid(row=1, column=1)
    Mainlabel1 = Label(master=codemakerframe,
                       text="kleur 2",
                       background='#ffffff',
                       foreground='#001066',
                       font=('NS Sans', 12, 'bold'),
                       width=5,
                       height=3)
    Mainlabel1.grid(row=1, column=2)
    Mainlabel2 = Label(master=codemakerframe,
                       text="kleur 3",
                       background='#ffffff',
                       foreground='#001066',
                       font=('NS Sans', 12, 'bold'),
                       width=20,
                       height=3)
    Mainlabel2.grid(row=1, column=3)
    Mainlabel3 = Label(master=codemakerframe,
                       text="kleur 4",
                       background='#ffffff',
                       foreground='#001066',
                       font=('NS Sans', 12, 'bold'),
                       width=9,
                       height=3)
    Mainlabel3.grid(row=1, column=4)

    terug = Button(master=codemakerframe,
                          text='terug naar hoofdmenu',
                          font=('arial', 20),
                          command=toonhoofdframe,
                          background="white",
                          foreground="black",
                          width=20,
                          height=5)
    terug.grid(row=6, column=6)

    root.bind("<Escape>", lambda e: e.widget.quit())

    master = codemakerframe



def toongokkerframe():
    '''opent gokkerframe, en sluit hoofdframe'''
    hoofdframe.grid_forget()
    gokkerframe.grid(row=0, column=0)
    gokker()

def tooncodemakerframe():
    '''opent codemakerframe, en sluit hoofdframe'''
    hoofdframe.grid_forget()
    codemakerframe.grid(row=0, column=0)
    codemaker()


def toonhoofdframe():
    '''opent hoofdframe, en sluit andere frames'''
    gokkerframe.grid_forget()
    codemakerframe.grid_forget()
    hoofdframe.grid(row=0,column=0)





root = Tk()
root.configure(background="grey")
root.geometry("{0}x{1}+0+0".format(root.winfo_screenwidth(), root.winfo_screenheight()))
root.title('Mastermind')
root.bind("<Escape>", lambda e: e.widget.quit())
# hier word de root omschreven


gokkerframe = Frame(master=root, background="grey")
gokkerframe.grid(row=0, column=0)

codemakerframe = Frame(master=root)
codemakerframe.grid(row=0, column=0)


hoofdframe = Frame(master=root, background="grey")
hoofdframe.grid(row=0, column=0)
# hier wordt het hoofdframe gemaakt



gokkerbutton = Button(master=hoofdframe,
                        text='Ik ben gokker',
                        font=('arial', 20),
                        command=toongokkerframe,
                        background="white",
                        foreground="black",
                        width=20,
                        height=5)
gokkerbutton.grid(row=0, column=0)



codemakerbutton = Button(master=hoofdframe,
                        text='Ik ben codemaker',
                        font=('arial', 20),
                        command=tooncodemakerframe,
                        background="white",
                        foreground="black",
                        width=20,
                        height=5)
codemakerbutton.grid(row=2, column=0)


toonhoofdframe()

root.mainloop()
