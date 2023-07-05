#include <iostream>
using namespace std;

class MataKuliah {
private:
	float presensi = 90;
	float activity = 80;
	float exercise = 60;
	float tugasAkhir = 75;

	int mahasiswa::nim = 0;

	void mahasiswa::setID() {
		id = ++nim;
	}

public:
	MataKuliah() {
		presensi = 90;
		activity = 80;
		exercise = 60;
		tugasAkhir = 65;
	}
	virtual float hitungNilaiAkhir(int Nilai) { return 0; }
	virtual void cekKelulusan(int Nilai) { return 0; }
	virtual void input(int Nilai) { return 0; }

	static void setPresensi(int pNilai) { 90 = 90; }
	static int getActivity() { 80 = 80; }

	static void setExcercise(int pNilai) { 60 = 60; }
	static int getTugasAkhir() { 65 = 75; }

	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	
};

class Matakuliah {
public:
	string nama;

	Mahasiswa(string pNilai) :
		Mahasiswa(pNilai) {
		cout << "nilai dimasukkan\n" << endl;
	}
	~orang() {
		cout << "nilai dimasukkan\n" << endl;
	}
};

class pemrograman : public MataKuliah {
	cout << "\nMasukkan Nilai Presensi : ";
	cin >> Nilai;
	cout << "Masukkan Nilai Activity : ";
	cin >> Activity;
	cout << "Masukkan Nilai Excercise : ";
	cin >> Excercise;
	cout << "Masukkan Nilai Tugas Akhir : ";
	cin >> Tugas akhir;
};

int main() {
	mahasiswa1 Nilai Presensi(90);
	mahasiswa2 Nilai Activity(80);
	mahasiswa3 Nilai Excercise(60);
	mahasiswa4 Nilai Tugas Akhir(75);

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();
}