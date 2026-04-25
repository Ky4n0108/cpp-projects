#include <iostream>
using namespace std;

// Struktur Node
struct Node {
    int data;
    Node* next;
};

// Class Linked List
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = NULL;
    }

    // Menambah node di awal
    void insertDepan(int nilai) {
        Node* nodeBaru = new Node();
        nodeBaru->data = nilai;
        nodeBaru->next = head;
        head = nodeBaru;
        cout << "Data " << nilai << " ditambahkan di depan" << endl;
    }

    // Menambah node di akhir
    void insertBelakang(int nilai) {
        Node* nodeBaru = new Node();
        nodeBaru->data = nilai;
        nodeBaru->next = NULL;

        if (head == NULL) {
            head = nodeBaru;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = nodeBaru;
        }
        cout << "Data " << nilai << " ditambahkan di belakang" << endl;
    }

    // Menghapus node dengan nilai tertentu
    void hapus(int nilai) {
        if (head == NULL) {
            cout << "List kosong!" << endl;
            return;
        }

        // Jika node yang dihapus adalah head
        if (head->data == nilai) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Data " << nilai << " berhasil dihapus" << endl;
            return;
        }

        // Mencari node yang akan dihapus
        Node* temp = head;
        while (temp->next != NULL && temp->next->data != nilai) {
            temp = temp->next;
        }

        if (temp->next == NULL) {
            cout << "Data " << nilai << " tidak ditemukan" << endl;
        } else {
            Node* nodeHapus = temp->next;
            temp->next = temp->next->next;
            delete nodeHapus;
            cout << "Data " << nilai << " berhasil dihapus" << endl;
        }
    }

    // Menampilkan semua data
    void tampilkan() {
        if (head == NULL) {
            cout << "List kosong!" << endl;
            return;
        }

        Node* temp = head;
        cout << "Isi Linked List: ";
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) cout << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Mencari data
    bool cari(int nilai) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == nilai) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    // Menghitung jumlah node
    int hitung() {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Destructor untuk membersihkan memori
    ~LinkedList() {
        Node* temp;
        while (head != NULL) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Fungsi main untuk demo
int main() {
    LinkedList list;

    cout << "=== DEMO LINKED LIST ===" << endl << endl;

    // Menambah data
    list.insertBelakang(10);
    list.insertBelakang(20);
    list.insertBelakang(30);
    list.insertDepan(5);
    
    cout << endl;
    list.tampilkan();
    
    // Menghitung jumlah node
    cout << "\nJumlah node: " << list.hitung() << endl;

    // Mencari data
    cout << "\nMencari nilai 20: " << (list.cari(20) ? "Ditemukan" : "Tidak ditemukan") << endl;
    cout << "Mencari nilai 100: " << (list.cari(100) ? "Ditemukan" : "Tidak ditemukan") << endl;

    // Menghapus data
    cout << endl;
    list.hapus(20);
    list.tampilkan();

    cout << "\nJumlah node setelah hapus: " << list.hitung() << endl;

    return 0;
}