//
//  GTISecureCard.m
//  GTISecureCard
//
//  Created by Quan Pham on 5/3/19.
//  Copyright © 2019 Quan Pham. All rights reserved.
//

#import "GTISecureCard.h"

@implementation GTISecureCard

- (void)initDevice {
    readerEvent = [[GTICREvent alloc] initWithDelegate:self];
}

- (void)onMediaNeedFormat {
    // Code...
}

- (void)onMediaNotFound {
    // Code...
}

- (void)onMediaReady {
    // Code...
}

- (void)onReaderDisconnected {
    // Code...
}

- (void)onReaderNotFound {
    // Code...
}

- (void)onReaderNotSupported {
    // Code...
}

- (void)onUnknownError:(unsigned int)err {
    // Code...
}

@end
