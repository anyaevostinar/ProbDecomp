/*
 *  data/DataTypes.h
 *  avida-core
 *
 *  Created by David on 5/18/11.
 *  Copyright 2011 Michigan State University. All rights reserved.
 *  http://avida.devosoft.org/
 *
 *
 *  This file is part of Avida.
 *
 *  Avida is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 *  Avida is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License along with Avida.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 *  Authors: David M. Bryson <david@programerror.com>
 *
 */

#ifndef AvidaDataDataTypes_h
#define AvidaDataDataTypes_h

#include "apto/core.h"

class cWorld;

namespace Avida {
  namespace Data {
    
    // Class Declarations
    // --------------------------------------------------------------------------------------------------------------
    
    class cPackage;
    class cProvider;    
    class cRecorder;

    
    // Type Declarations
    // --------------------------------------------------------------------------------------------------------------

    typedef Apto::SmartPtr<cProvider, Apto::ThreadSafeRefCount> ProviderPtr;
    typedef Apto::Functor<ProviderPtr, Apto::TL::Create<cWorld*> > ProviderActivateFunctor;
    
    typedef Apto::SmartPtr<cRecorder, Apto::ThreadSafeRefCount> RecorderPtr;
    
    typedef Apto::SmartPtr<Apto::Set<Apto::String>, Apto::ThreadSafeRefCount> DataSetPtr;
    typedef Apto::SmartPtr<const Apto::Set<Apto::String>, Apto::ThreadSafeRefCount> ConstDataSetPtr;
    typedef Apto::Set<Apto::String>::ConstIterator ConstDataSetIterator;
    
    typedef Apto::SmartPtr<cPackage, Apto::ThreadSafeRefCount> PackagePtr;
    
    typedef Apto::Functor<PackagePtr, Apto::TL::Create<const Apto::String&> > DataRetrievalFunctor;
    
  };
};

#endif