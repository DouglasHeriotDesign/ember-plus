/*
    Copyright (C) 2012-2016 Lawo GmbH (http://www.lawo.com).
    Distributed under the Boost Software License, Version 1.0.
    (See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*/

#ifndef __TINYEMBERROUTER_MODEL_ELEMENTVISITOR_H
#define __TINYEMBERROUTER_MODEL_ELEMENTVISITOR_H

namespace model
{
   class Node;
   class IntegerParameter;
   class StringParameter;
   class Function;
   class BooleanParameter;

   namespace matrix
   {
      class OneToNLinearMatrix;
      class NToNLinearMatrix;
      class NToNNonlinearMatrix;
      class DynamicNToNLinearMatrix;
   }

   /**
     * Visitor Interface accepted by Element::accept().
     */
   class ElementVisitor
   {
   public:
      virtual void visit(Node* element) = 0;
      virtual void visit(BooleanParameter* element) = 0;
      virtual void visit(IntegerParameter* element) = 0;
      virtual void visit(StringParameter* element) = 0;
      virtual void visit(Function* element) = 0;
      virtual void visit(matrix::OneToNLinearMatrix* element) = 0;
      virtual void visit(matrix::NToNLinearMatrix* element) = 0;
      virtual void visit(matrix::NToNNonlinearMatrix* element) = 0;
      virtual void visit(matrix::DynamicNToNLinearMatrix* element) = 0;
   };
}

#endif//__TINYEMBERROUTER_MODEL_ELEMENTVISITOR_H
