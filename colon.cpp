struct Foo
{
};

// Has space before colon
template< bool B >
struct Bar : Foo
{
};

// Space before colon is removed
template< >
struct Bar< false > : Foo
{
};
