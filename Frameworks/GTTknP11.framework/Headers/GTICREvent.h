/**
 * @file GTICREvent.h
 * @brief The delegate of iReader events
 * @details
 * @author GOTrust Technology Inc.
 * @copyright Copyright (C) 2016 by GOTrust Technology Inc. All rights reserved. \n
 *            The Information Contained Herein is the Exclusive Property of GOTrust Technology Inc.
 *            and Shall not be Distributed, Reproduced, or Disclosed in Whole or in Part Without Prior
 *            Written Permission of GOTrust Technology Inc.
 */


#ifndef GTICREvent_h
#define GTICREvent_h

#import <Foundation/Foundation.h>

/**
 * @defgroup GTICREvent iReader Device Event
 */


/**
 Set of methods to be implemented to deal with reader event
 */
@protocol GTICREventDelegate

@required

/**
 * The function will be called when no reader is found. The event occurs only upon application launch.
 * @ingroup GTICREvent
 */
- (void)onReaderNotFound;

/**
 * The function will be called when reader type not supported.
 * @ingroup GTICREvent
 */
- (void)onReaderNotSupported;

/** 
 * The function will be called when a reader is disconnected.
 * @ingroup GTICREvent
 */
- (void)onReaderDisconnected;

/**
 * The function will be called when a microSD card is ready for access.
 * @ingroup GTICREvent
 */
- (void)onMediaReady;

/** 
 * The function will be called when a reader is connected but the microSD card needs to be formatted.
 * @ingroup GTICREvent
 */
- (void)onMediaNeedFormat;

/** 
 * The function will be called when a reader is connected but no miroSD card is detected.
 * @ingroup GTICREvent
 */
- (void)onMediaNotFound;

/** 
 * The function will be called when an unknown error occurs upon iReader initialization.
 * @param[in] err The error code.
 * @ingroup GTICREvent
 */
- (void)onUnknownError:(unsigned int) err;

@optional
/** 
 * The function will be called when a reader is inserted and the reader is trying to mount the microSD card.
 * @ingroup GTICREvent
 */
- (void)onReaderConnected;

/** 
 * The function will be called when a reader has been occupy by another application.
 * @ingroup GTICREvent
 */
- (void)onReaderBeenOccupied;

/** 
 * The function will be called when a reader previously occupied by another application has been released.
 * @ingroup GTICREvent
 */
- (void)onReaderBeenReleased;

@end

@interface GTICREvent : NSObject
{
    
}
/**
 * Initialize library with delegate.
 * @param[in] delegate Supplies a delegate instance.
 * @return Returns a GTICREvent object.
 * @ingroup GTICREvent
 * @note This function will check reader state automatically and notify APP by delegate.
 */
-(id) initWithDelegate:(id)delegate;

/**
 * Initialize full library with delegate.
 * @param[in] delegate Supplies a delegate instance.
 * @return Returns a GTICREvent object.
 * @ingroup GTICREvent
 * @note This function will check reader state automatically and notify APP by delegate.
 */
-(id) initFullFunctionWithDelegate:(id)delegate;

@end

#endif /* GTICREvent_h */
