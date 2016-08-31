

    <?hh //strict

        namespace MyFirstTest\Providers;


        use Plenty\Plugin\RouteServiceProvider;
        use Plenty\Plugin\Routing\Router;

        class MyFirstTestRouteServiceProvider extends RouteServiceProvider
        {
            public function map(Router $router):void
            {
	            $router->get('my1test','MyFirstTest\Controllers\ContentController@runMyFirstTest');
            }
        }
