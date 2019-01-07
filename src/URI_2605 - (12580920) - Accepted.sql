SELECT products.name, providers.name FROM products
	JOIN providers ON products.id_providers = providers.id
	WHERE products.id_categories = 6;