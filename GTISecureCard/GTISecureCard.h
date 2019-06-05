//
//  GTISecureCard.h
//  GTISecureCard
//
//  Created by Quan Pham on 5/3/19.
//  Copyright © 2019 Quan Pham. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <GTTknP11/GTICREvent.h>

@interface GTISecureCard : NSObject<GTICREventDelegate> {
    GTICREvent *readerEvent;
}

- (void) initDevice;

@end
