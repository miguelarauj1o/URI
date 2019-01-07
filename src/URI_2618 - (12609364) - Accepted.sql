SELECT products.name, providers.name, categories.name FROM products
JOIN categories ON products.id_categories = categories.id
JOIN providers ON products.id_providers = providers.id
WHERE categories.name = 'Imported' AND providers.name = 'Sansul SA';