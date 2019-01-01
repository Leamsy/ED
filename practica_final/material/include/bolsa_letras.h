#ifndef __bolsa_letras_h__
#define __bolsa_letras_h__


#include "letra.h"
#include "conjunto_letras.h"
#include <unordered_set>


class bolsa_letras{
	private:
		unordered_multiset<char> bolsa;
		
	public:
		bolsa_letras();
		bolsa_letras(const bolsa_letras & otra);
		bolsa_letras(const conjunto_letras & c);

		unordered_multiset<char> getBolsa();
		void addLetra(const letra & l);
		void addLetra(const char & l);
		void removeLetra(const letra & l);
		void removeLetra(const char & l);
		bolsa_letras getLetras(int num);

		bool Esta(const letra & l);
		bool Esta(const char & c);

		friend istream & operator >> (istream & is, bolsa_letras & bolsa );

		friend ostream & operator << (ostream & os, const bolsa_letras & bolsa); 



	class iterator {
		public:
			iterator();
			char operator *();
			iterator & operator ++ ();
			bool operator ==(const iterator &i);
			bool operator !=(const iterator &i);
			friend class bolsa_letras;
		private:			
			unordered_multiset<char>::iterator it;
	};


	class const_iterator {
		public:
			const_iterator();
			char operator *() const;
			const_iterator & operator ++ ();
			bool operator ==(const const_iterator &i) const;
			bool operator !=(const const_iterator &i) const;
			friend class bolsa_letras;
		private:			
			unordered_multiset<char>::const_iterator it;
	};
	
	iterator begin();
	const_iterator begin() const;
	iterator end();
	const_iterator end() const;

};








#endif