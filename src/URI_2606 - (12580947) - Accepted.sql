SELECT products.id, products.name FROM products
	JOIN categories ON products.id_categories = categories.id
	WHERE categories.name like 'super%';