//
//  DOMSelectionCacheRecord.h
//  macSVG
//
//  Created by Douglas Ward on 1/11/12.
//  Copyright © 2016 ArkPhone LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DOMElement;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@interface DOMSelectionCacheRecord : NSObject
{
}
@property(strong) DOMElement * parentElement;
@property(strong) DOMElement * controlParentElement;

@end


#pragma clang diagnostic pop
