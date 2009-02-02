/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/
//

/*************
The networking code of the DCMFramework is predominantly a port of the 11/4/04 version of the java pixelmed toolkit by David Clunie.
htt://www.pixelmed.com   
**************/

#import <Cocoa/Cocoa.h>
#import "DCMAssociation.h"



@interface DCMAssociationListener : DCMAssociation {

}
+ (id)listenerWithParameters:(NSDictionary *)params;
- (id)initWithParameters:(NSDictionary *)params;
- (void)spawnNewResponder:(NSDictionary *)params;
- (void)listen:(id)object;

@end
