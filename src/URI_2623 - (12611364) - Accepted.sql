SELECT products.name, categories.name FROM products
JOIN categories ON products.id_categories = categories.id
WHERE (products.amount > 100 AND products.id_categories in (1,2,3,6,9));