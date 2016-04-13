program int_simpson;
function f(x : double) : double;
begin
  f := x * x + 2 * x;
end;
const N = 10; //liczba punktów podziałowych
var
  xp,xk,s,st,dx,x : double;
  i : integer;
begin
  writeln('Obliczanie calki oznaczonej');
  writeln;
  writeln('f(x) = x * x + 2 * x');
  writeln;
  writeln('Podaj poczatek przedzialu calkowania');
  writeln;
  write('xp = '); readln(xp);
  writeln;
  writeln('Podaj koniec przedzialu calkowania');
  writeln;
  write('xk = '); readln(xk);
  writeln;
  s  := 0; st := 0;
  dx := (xk - xp) / N;
  for i := 1 to N do
  begin
    x  := xp + i * dx;
    st := st + f(x - dx / 2);
    if i < N then s := s + f(x);
  end;
  s := dx / 6 * (f(xp) + f(xk) + 2 * s + 4 * st);
  writeln('Wartosc calki wynosi : ',s:8:3);
  writeln;
  writeln('Nacisnij klawisz Enter...');
  readln;
end;
  writeln('Obliczanie drugiej calki oznaczonej');
   writeln;
  writeln('f(x) = x * x  * x+ 2 * x');
  writeln;
  writeln('Podaj poczatek przedzialu calkowania');
  writeln;
  write('xp = '); readln(xp);
  writeln;
  writeln('Podaj koniec przedzialu calkowania');
  writeln;
  write('xk = '); readln(xk);
  writeln;
  s  := 0; st := 0;
  dx := (xk - xp) / N;
  for i := 1 to N do
  begin
    x  := xp + i * dx;
    st := st + f(x - dx / 2);
    if i < N then s := s + f(x);
  end;
  s := dx / 6 * (f(xp) + f(xk) + 2 * s + 4 * st);
  writeln('Wartosc calki wynosi : ',s:8:3);
  writeln;
  writeln('Nacisnij klawisz Enter...');
  readln;
end.
