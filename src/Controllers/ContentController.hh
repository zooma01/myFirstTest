

    <?hh //strict

        namespace MyFirstTest\Controllers;


        use Plenty\Plugin\Controller;
        use Plenty\Plugin\Templates\Twig;

        class ContentController extends Controller
        {
            public function runMyFirstTest(Twig $twig):string
            {
                return $twig->render('MyFirstTest::TEMPLATE');
            }

            public function runMyFirstTest(Twig $twig):string
            {
              return $twig->render('MyFirstTest::content.my1test');
            }
        }
