

    <?hh //strict

        namespace MyFirstTest\Providers;


        use Plenty\Plugin\ServiceProvider;

        class MyFirstTestServiceProvider extends ServiceProvider
        {

            /**
             * Register the service provider.
             */

            public function register():void
            {
                  $this->getApplication()->register(MyFirstTestRouteServiceProvider::class);
            }
      }
