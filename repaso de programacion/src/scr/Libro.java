package scr;

public class Libro {
    //atributos
    private int idLibro;
    private String titulo;
    private String autor;
    private int numPaginas;

    //constructores
    public Libro(int pIdLibro, String pTitulo, String pAutor, int pNumPaginas) {
        idLibro = pIdLibro;
        titulo = pTitulo;
        autor = pAutor;
        numPaginas = pNumPaginas;
    }
    //metodos

    public int getIdLibro() {
        return idLibro;
    }

    public void setIdLibro(int idLibro) {
        this.idLibro = idLibro;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getAutor() {
        return autor;
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public int getNumPaginas() {
        return numPaginas;
    }

    public void setNumPaginas(int numPaginas) {
        this.numPaginas = numPaginas;
    }

    public String toString() {
        return "El libro "+titulo+" con id "+idLibro+
                " por el autor "+autor+
                " tiene "+numPaginas+
                " paginas";
    }
}

