SELECT products.name FROM products
JOIN providers ON products.id_providers = providers.id
WHERE products.amount >= 10 AND products.amount <= 20 AND providers.name like 'P%';