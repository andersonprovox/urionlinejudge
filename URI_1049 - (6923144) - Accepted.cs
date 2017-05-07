using System; 

class URI {

    static void Main(string[] args) { 

       string sNome = "";

			sNome = Console.ReadLine ();
			if (sNome == "vertebrado") 
			{
				sNome = Console.ReadLine ();
				if (sNome == "ave") 
				{
					sNome = Console.ReadLine ();
					if (sNome == "carnivoro") 
					{
						Console.WriteLine ("aguia");
					}
					else if(sNome == "onivoro")
					{
						Console.WriteLine ("pomba");
					}
				}
				else if (sNome == "mamifero") 
				{
					sNome = Console.ReadLine ();
					if (sNome == "onivoro") 
					{
						Console.WriteLine ("homem");
					}
					else if (sNome == "herbivoro") 
					{
						Console.WriteLine ("vaca");
					}
				}
			}
			else if (sNome == "invertebrado") 
			{
				sNome = Console.ReadLine ();
				if (sNome == "inseto") 
				{
					sNome = Console.ReadLine ();
					if (sNome == "hematofago") 
					{
						Console.WriteLine ("pulga");
					}
					else if (sNome == "herbivoro") 
					{
						Console.WriteLine ("lagarta");
					}
				}
				else if (sNome == "anelideo") 
				{
					sNome = Console.ReadLine ();
					if (sNome == "hematofago")
					{
						Console.WriteLine ("sanguessuga");
					}
					else if (sNome == "onivoro") 
					{
						Console.WriteLine ("minhoca");
					}
				}
			}
		}

    }

