<?php

namespace Rector\CodingStyle\Tests\Rector\Variable\UnderscoreToPascalCaseVariableAndPropertyNameRector\Fixture;

final class SomeClass
{
    public function run($a_b)
    {
        $some_value = 5;

        $this->run($a_b);
    }
}

?>
-----
<?php

namespace Rector\CodingStyle\Tests\Rector\Variable\UnderscoreToPascalCaseVariableAndPropertyNameRector\Fixture;

final class SomeClass
{
    public function run($aB)
    {
        $someValue = 5;

        $this->run($aB);
    }
}

?>
