# Filtrar entrada

Exemplo de entrada de questão: "20:00:11"

    scanf("%d:%d:%d", &a, &b, &c);

# Técnica do histograma

Muito comum para armazenar repetições de números:

1. Primeiro passo se cria um array do tamanho necessário em escopo global

2. O segundo passo é zerar o array, pra isso se cria uma função:

```  
    int array[10000];

    void clean() {
    	for (i = 0; i < 10000; i++) {
    		array[i] = 0;
    	}
    }
```

3. O terceiro passo é implementar como o exemplo:
```
    for (i = 0; i < 50; i++) {
    	cin >> aux;
    	array[aux]++;
    }
```
Outra maneira mais eficiente e usando uma estrutura STL que aloca seus membros dinâmicamente tendo uma árvore por trás é:

    map<int, int> mymap;

Simplesmente declarando um map em escopo global e fazendo o mesmo procedimento de adição em posições.

# Encurtamento de código

Como em ppc precisamos de tempo existem algumas formas de reaproveitarmos código, abaixo do include declare por exemplo:

    using vec = vector<int>;
    using mp = make_pair;
    using ll = long long;

# Otimização de tempo de compilação (Evitar TLE)

A linha de código a seguir basicamente "desliga" a stdio padrão do C, ou seja, printf fica desabilitado:

    std::ios::sync_with_stdio(false);

Deve ser declarado dentro da função main.

# Resto euclidiano (Ceil( ))

- Para uma solução de uma divisão de inteiros, arredondando o resto para cima basta soma ao dividendo um número estritamente menor que o divisor.

$$(N-1 + K-2)/K-1$$

    int a = ((N - 1) + K - 2)/ (K - 1);

# Transformando long long de volta para int

- É necessário difinir como padrão uma variável mod, que servirá como base
```
    const long long MOD {1000000007};

    int main () {
    	long long z = (long long) x + y;
    	z = z % MOD;
    	//z volta para o range do int
    }
```
# Redirecionando erros na execução

- Caso uma mensagem ou comando de erro seja declarado no código, ao redirecionar a saída do programa para um arquivo

# Declarações de set

    set<int> s(v.begin(), v.end()); //copia o vector v
    set<int> s3(move(s)); //move o que esta sendo armazenado de uma estrutura pra outra

# Busca em estruturas

    rfind(); //procura de trás para frente


# Set intersection

- passam duas estruturas e devolve a interseção entre elas

## Busca em estrutura que retorna index

    vector<int> v;
    auto it = lower_bound(v.begin(), v.end(), num);
    int index = it - v.begin();
