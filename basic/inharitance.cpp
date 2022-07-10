/*                           //about the class more
     --->public,private and protected are access specifier
     --->all variable call member
     --->all funcion call member function or methods
     
*/

/*                           //protected member
    -->protected member are those type of member which are not accesible directly but can be inharite
    -->In simple private member those can't be revel but it can inharit
*/

/*                           //about and type of inharitance
  What is inheritance?
    -inharitance mean inharite some properties of parent class from base class

  Types of inharitance

   1.
      A->B  single level inharitance

   2.
      A--
         |--> C  multipe inharitance
      B--

   3. multilevel inhariance
      A->B->c

   4.herherical in haritance
            --->B
       A---|
            --->C

    5.hybrid inharitance
       combine of all of the above
*/

/*                           //visiblity mode

   arj:-
         -->private member never inharite
         -->private member of base class not directly accesible by the derived clas methods(member function) it mean we have to access base class private member by the base class member function
         -->protected member of base class are accesible by the derived class member function it mean we can access base class protected member by derived class member function

   syntax:

      class {{derived_class_name}} : visiblity_mode  {{base_class_name}}

      {{}}  -->refer to value can be change

      types of vidiblity mode

         1.private
           -->all public and protected member of base class become private member of derived class

         2.public
           --->public member of base class become public member of derived class
           --->protected member of base class become protected member of derived class

         3.protected
           -->public and protected member of base class become protected member of derived class
*/

/*                           //properties of visiblity mode
    If publically inharied ?
       -->all methods and member which are public in the base class is directlt accesible by the object of derived class
       -->methods and member of base class are accesible by methodes of derived class and object of derived class

    If privately inharied ?
       -->all methods and member which are public in the base class is directlt not accesible by the object of derived class
       -->methods and member of base class are accesible by methodes of derived class only
       -

    If protectdely inharied ?
       -->all methods and member which are public in the base class is directlt not accesible by the object of derived class
       -->methods and member of base class are accesible by methodes of derived class only
       -->main difference from private is
          -->member and methods of base class directy use by the derived methods
*/