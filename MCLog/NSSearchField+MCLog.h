//
//  NSSearchField+MCLog.h
//  MCLog
//
//  Created by Alex Lee on 1/6/16.
//  Copyright © 2016 Yuhua Chen. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class MCLogIDEConsoleArea;
@interface NSSearchField (MCLog)

@property (nonatomic, weak) MCLogIDEConsoleArea *consoleArea;
@property (nonatomic, weak) NSTextView          *consoleTextView;

@end

