//
//  CNSplitView.h
//
//  Created by cocoa:naut on 29.07.12.
//  Copyright (c) 2012 cocoa:naut. All rights reserved.
//

/*
 The MIT License (MIT)
 Copyright © 2012 Frank Gregor, <phranck@cocoanaut.com>

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the “Software”), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/

#import <Cocoa/Cocoa.h>
#import "CNSplitViewDefinitions.h"
#import "CNSplitViewToolbar.h"


/**
 CNSplitView is...

 */




@interface CNSplitView : NSSplitView

#pragma mark - Initializing a CNSplitView Object
/** @name Initializing a CNSplitView Object */



#pragma mark - Configuring & Handling Toolbars
/** @name Configuring & Handling Toolbars */

/**
 ...
 */
- (void)addToolBar:(CNSplitViewToolbar *)theToolBar besidesSubviewAtIndex:(NSUInteger)theSubviewIndex onEdge:(CNSplitViewToolbarEdge)theEdge;

/**
 ...
 */
- (void)addToolBar:(CNSplitViewToolbar *)theToolBar besidesSubviewAtIndex:(NSUInteger)theSubviewIndex onEdge:(CNSplitViewToolbarEdge)theEdge animated:(BOOL)animated;



#pragma mark - Managing the Delegate and the Data Source
/** @name Managing the Delegate and the Data Source */

/**
 ...
 */
- (void)setDeviderColor:(NSColor *)theColor;

@end