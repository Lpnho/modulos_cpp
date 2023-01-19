module;
export module snd;

export template <typename T>
auto soma(T f, T s) -> decltype(f + s)
{
    return f + s;
}
