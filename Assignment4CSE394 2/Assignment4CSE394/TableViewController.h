//
//  TableViewController.h
//  Assignment4CSE394
//
//  Created by James Perry on 2/26/15.
//  Copyright (c) 2015 James Perry. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MovieManager.h"
#import "ImageCache.h"
#import "BookInfoViewController.h"
@interface TableViewController : UITableViewController 
@property NSMutableArray *tableMovieArray;
@property int ShowAdd; //0 = show, 1 = hide, 2 = remove
@property NSMutableArray *watchedMovies;
@property NSString *backedMovie; 
@end
