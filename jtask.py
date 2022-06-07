from sys import exit

class Automobil:

	def __init__(self, marka, model, godinaProizvodnje, brojRegistracije, kubikaza):
		self.marka = marka
		self.model = model
		self.godinaProizvodnje = godinaProizvodnje
		self.brojRegistracije = brojRegistracije
		
	def ispisiPodatke(self):
		print("Marka modela je {}, model automobila je {}, godina proizvodnje je: {}, broj registracije: {}".format(self.marka, self.model, self.godinaProizvodnje, self.brojRegistracije))
		
	def promjeniBrojRegistracije(self, brojReg):
		self.brojRegistracije = brojReg
		
	def provjeraRegistracije(self):
		x = self.brojRegistracije.split("-")
		ispravnaReg = True
		
		if x[1].isnumeric():
			x[1] = int(x[1])
		else:
			print("Nisu ipravne tablice jer u sredini nisu brojevi")
			exit(0)
		
		if x[1] in range(999):
			ispravnaReg = True
		else:
			ispravnaReg = False

		if x[0].isupper() and x[2].isupper() and x[0].isalpha() and x[2].isaplha():
			ispravnaReg = True
		else:
			ispravnaReg = False
		if ispravnaReg:
			print("Registracija je ispravna")
		else:
			print("nije ispravna")
		
			
auto1 = Automobil("bmw","test",2021,"A1-222-B1", 110)
auto1.ispisiPodatke()
auto1.provjeraRegistracije()
