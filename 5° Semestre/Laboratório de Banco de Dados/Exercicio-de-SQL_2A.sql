--------------------------------------------------------
	--  Exercício 02 de fixação SQL     
--------------------------------------------------------

9 - Selecione Nome da Cidade, Nome do Produto e Data_da_Venda com volume de Vendas maior que 2000

SELECT CIDADE, PRODUTOS, DATA_DA_VENDA 
   FROM VENDAS INNER JOIN CIDADE ON vendas.codigo_cidade = cidade.codigo_cidade
       INNER JOIN PRODUTO ON vendas.codigo_produto = PRODUTO.CODIGO_PRODUTO
       WHERE VENDAS.VOLUME_VENDA > 2000;
	   
10 - Selecione Nome do Vendedores, volume de venda que venderam em Campinas em ordem de volume de 
     volume de venda

  SELECT VENDEDOR, VOLUME_VENDA, CIDADE.CIDADE
   FROM VENDAS INNER JOIN VENDEDOR ON vendas.codigo_vendedor = vendedor.codigo_vendedor
     INNER JOIN CIDADE ON vendas.codigo_cidade = CIDADE.CODIGO_CIDADE
     WHERE CIDADE.CIDADE = 'Campinas' 
	       or CIDADE.CIDADE = 'Sorocaba' 
		   or CIDADE.CIDADE = 'Alphavile'
	   ORDER BY VOLUME_VENDA;
	   
 SELECT VENDEDOR, VOLUME_VENDA
   FROM VENDAS INNER JOIN VENDEDOR ON vendas.codigo_vendedor = vendedor.codigo_vendedor
     INNER JOIN CIDADE ON vendas.codigo_cidade = CIDADE.CODIGO_CIDADE
     WHERE CIDADE.CIDADE in ('Campinas', 'Sorocaba', 'Alphavile')  
	 
--- Usando a função UPPER
  SELECT VENDEDOR, VOLUME_VENDA
   FROM VENDAS INNER JOIN VENDEDOR ON vendas.codigo_vendedor = vendedor.codigo_vendedor
     INNER JOIN CIDADE ON vendas.codigo_cidade = CIDADE.CODIGO_CIDADE
     WHERE UPPER(CIDADE.CIDADE) in ('CAMPINAS')  
	 
11 - Selecione a Data_da_Venda e o nome dos Produtos que venderam abaixo de 5000 unidades 
     na cidade de São Paulo
	 
SELECT VENDAS.DATA_DA_VENDA,
  PRODUTO.PRODUTOS,
  CIDADE.CIDADE,
  VENDAS.VOLUME_VENDA
FROM PRODUTO
INNER JOIN VENDAS
ON PRODUTO.CODIGO_PRODUTO = VENDAS.CODIGO_PRODUTO
INNER JOIN CIDADE
ON CIDADE.CODIGO_CIDADE   = VENDAS.CODIGO_CIDADE
WHERE VENDAS.VOLUME_VENDA < 500;
	 
12 - Apresente as vendas com o Nome do Produto, Data da Venda, Prazo em dias, volume e nome da cidade 
   com volume > 5000 e que não foram realizadas em São Paulo
	 
SELECT PRODUTO.PRODUTOS,   VENDAS.DATA_DA_VENDA,   VENDAS.PRAZO_DIAS,
  VENDAS.VOLUME_VENDA,   CIDADE.CIDADE
FROM PRODUTO
INNER JOIN VENDAS
ON PRODUTO.CODIGO_PRODUTO = VENDAS.CODIGO_PRODUTO
INNER JOIN CIDADE
ON CIDADE.CODIGO_CIDADE   = VENDAS.CODIGO_CIDADE
WHERE VENDAS.VOLUME_VENDA > 5000
AND CIDADE.CIDADE   <> 'São Paulo'; 
	 
13 Apresente o Nome do Cliente, Nome do Vendedor e o Total da Venda ordenado pelo Total da venda e 
  cliente do maior  para o menor

  SELECT CLIENTE.CLIENTE,   VENDEDOR.VENDEDOR,  VOLUME_VENDA * PRECO_VENDA AS TOTAL_VENDA
FROM CLIENTE INNER JOIN VENDAS ON CLIENTE.CODIGO_CLIENTE = VENDAS.CODIGO_CLIENTE
INNER JOIN VENDEDOR ON VENDEDOR.CODIGO_VENDEDOR = VENDAS.CODIGO_VENDEDOR
  ORDER BY  CLIENTE.CLIENTE, TOTAL_VENDA DESC;

   
14 - Selecione codigo, data_da_venda e o Valor_total Vendido onde o Valor_total Vendido sela menor 3000 
    em ordem decrescente do Valor_total Vendido
	
	SELECT CODIGO, DATA_DA_VENDA, VOLUME_VENDA * PRECO_VENDA AS TOTAL_VENDA
	  FROM VENDAS WHERE VOLUME_VENDA * PRECO_VENDA < 3000
	  ORDER BY TOTAL_VENDA DESC;
	  
	  
	
