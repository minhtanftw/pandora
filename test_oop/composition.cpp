
Assoociation:
class Composition{
    private:
    Bar bar;
}

//
Composition:
class Fo{
    private:
    Bar bar = new Bar();
}
Aggreation:
public class Foo{
    private Bar bar;
    Foo(Bar bar_):
    this.bar = bar_;
}
